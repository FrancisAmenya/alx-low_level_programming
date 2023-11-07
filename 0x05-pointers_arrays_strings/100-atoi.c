#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @ll: the destination string
 * Return: the pointer to dest
 */

char *_atoi(char *ll)
{
	int i;

	for (i = 0; i <= _strlen(*ll); i++)
		*ll[i] = src[i];
	return (*ll);
}

/**
 * _strlen - length of a string
 * @s: the string to check
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
