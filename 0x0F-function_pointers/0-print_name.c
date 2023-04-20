#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed by
 * @f: pointer to the function f
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
