#include "main.h"
/**
 * _puts_recursion - emulation of puts() function;
 * @pr: takes string input
 * Return: void (For successful print of string)
 */
void _puts_recursion(char *pr)
{

if (*pr)
{
_putchar(*pr);
_puts_recursion(pr + 1);
}

else
_putchar('\n');
}
