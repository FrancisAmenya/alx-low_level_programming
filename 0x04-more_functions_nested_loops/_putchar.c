#include <unistd.h>

/**
 * _putchar function - writes a character c to stdout
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set as needed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
