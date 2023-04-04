#include "main.h"
#include <stdio.h>
/**
 * set_string - redirect to set string to certain chars.
 * @s: double pointer to address,
 * @to: the original pointer,
 *
 * Return: the final string.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
