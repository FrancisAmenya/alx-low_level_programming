#include "main.h"

/**
 * _print_rev_recursion - Prints a string backwards from last to first
 *
 * @prr: char arg to print
 *
 * Return: void always
 */

void _print_rev_recursion(char *prr)
{
if (*prr)
	{
	_print_rev_recursion(prr + 1);
	_putchar(*prr);
	}
}
