#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>

#define BUF_SIZE 64

void print_error(char *message);
void print_elf_header(void *header, int is_32);
void close_file(int fd);
void print_string(char *str);
void print_num(unsigned long num, int base);
void print_char(char c);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	unsigned char e_ident[EI_NIDENT];

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Can't open file");
		exit(98);
	}

	if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT)
	{
		close_file(fd);
		print_error("Error: Can't read file");
		exit(98);
	}

	if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
		e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
	{
		close_file(fd);
		print_error("Error: Not an ELF file");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		Elf32_Ehdr header;

		if (read(fd, &header, sizeof(header)) != sizeof(header))
		{
			close_file(fd);
			print_error("Error: Can't read file");
			exit(98);
		}
		print_elf_header(&header, 1);
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		Elf64_Ehdr header;

		if (read(fd, &header, sizeof(header)) != sizeof(header))
		{
			close_file(fd);
			print_error("Error: Can't read file");
			exit(98);
		}
		print_elf_header(&header, 0);
	}
	else
	{
		close_file(fd);
		print_error("Error: Unknown ELF class");
		exit(98);
	}

	close_file(fd);
	return (0);
}

/**
 * print_error - Prints error message to stderr
 * @message: Error message
 */
void print_error(char *message)
{
	while (*message)
		write(STDERR_FILENO, message++, 1);
	write(STDERR_FILENO, "\n", 1);
}

/**
 * print_elf_header - Prints ELF header information
 * @header: Pointer to ELF header structure
 * @is_32: Flag indicating if it's a 32-bit ELF
 */
void print_elf_header(void *header, int is_32)
{
	Elf32_Ehdr *header32 = (Elf32_Ehdr *)header;
	Elf64_Ehdr *header64 = (Elf64_Ehdr *)header;
	int i;

	print_string("ELF Header:\n");
	print_string("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		print_num(is_32 ? header32->e_ident[i] : header64->e_ident[i], 16);
		print_char(' ');
	}
	print_char('\n');

	print_string("  Class:							 ");
	print_string(is_32 ? "ELF32\n" : "ELF64\n");

	print_string("  Data:							  ");
	print_string((is_32 ? header32->e_ident[EI_DATA] : header64->e_ident[EI_DATA]) == ELFDATA2LSB ?
				 "2's complement, little endian\n" : "2's complement, big endian\n");

	print_string("  Version:						   ");
	print_num(is_32 ? header32->e_ident[EI_VERSION] : header64->e_ident[EI_VERSION], 10);
	print_string(" (current)\n");

	print_string("  OS/ABI:							");
	print_num(is_32 ? header32->e_ident[EI_OSABI] : header64->e_ident[EI_OSABI], 10);
	print_char('\n');

	print_string("  ABI Version:					   ");
	print_num(is_32 ? header32->e_ident[EI_ABIVERSION] : header64->e_ident[EI_ABIVERSION], 10);
	print_char('\n');

	print_string("  Type:							  ");
	print_num(is_32 ? header32->e_type : header64->e_type, 10);
	print_char('\n');

	print_string("  Entry point address:			   0x");
	print_num(is_32 ? header32->e_entry : header64->e_entry, 16);
	print_char('\n');
}

/**
 * close_file - Closes file descriptor
 * @fd: File descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		print_error("Error: Can't close file descriptor");
		exit(98);
	}
}

/**
 * print_string - Prints a string
 * @str: String to print
 */
void print_string(char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, 1);
}

/**
 * print_num - Prints a number in the given base
 * @num: Number to print
 * @base: Base for printing (10 for decimal, 16 for hex)
 */
void print_num(unsigned long num, int base)
{
	char *digits = "0123456789abcdef";
	char buf[20];
	int i = 0;

	if (num == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		return;
	}

	while (num)
	{
		buf[i++] = digits[num % base];
		num /= base;
	}

	while (--i >= 0)
		write(STDOUT_FILENO, &buf[i], 1);
}

/**
 * print_char - Prints a single character
 * @c: Character to print
 */
void print_char(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

