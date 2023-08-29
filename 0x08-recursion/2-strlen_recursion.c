#include "main.h"
/**
 * _strlen_recursion - checks and returns the length of a string.
 * @sr: The string to check size.
 *
 * Return: longints (string size).
 */
int _strlen_recursion(char *sr)
{
	int longints = 0;

	if (*sr)
	{
		longints++;
		longints += _strlen_recursion(sr + 1);
	}

	return (longints);
}
