#include "main.h"
/**
 * _strchr - prints from the first occurence of a char.
 * @s: source string,
 * @c: tested char,
 *
 * Return: a new string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
