#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

void print_error(char *message);
void print_elf_header(Elf64_Ehdr *header);
void close_file(int fd);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

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

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		close_file(fd);
		print_error("Error: Can't read file");
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close_file(fd);
		print_error("Error: Not an ELF file");
		exit(98);
	}

	print_elf_header(&header);
	close_file(fd);
	return (0);
}

/**
 * print_error - Prints error message to stderr
 * @message: Error message
 */
void print_error(char *message)
{
	fprintf(stderr, "%s\n", message);
}

/**
 * print_elf_header - Prints ELF header information
 * @header: Pointer to ELF header structure
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("  Class:							 %s\n",
		   header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:							  %s\n",
		   header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:						   %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:							%d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:					   %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:							  %s\n",
		   header->e_type == ET_EXEC ? "EXEC (Executable file)" :
		   header->e_type == ET_DYN ? "DYN (Shared object file)" :
		   header->e_type == ET_REL ? "REL (Relocatable file)" : "UNKNOWN");
	printf("  Entry point address:			   0x%lx\n", (unsigned long)header->e_entry);
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

