#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - specified print name using pointer to function
 * @name:  specified string to add
 * @f: specified pointer to function
 * Return: specified nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
