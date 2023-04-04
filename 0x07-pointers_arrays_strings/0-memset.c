#include "mainn.h"
/**
 * _memset - fills the memory with a constant byte.
 * @s: source string,
 * @b: the contant byte for filling,
 * @n: lenght of buffer,
 * Return: A  new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
