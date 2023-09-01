#include "main.h"

/**
 * print_binary - prints specifierthe binary equivalent of a decimal number
 * @n: number specifier to print in binary
 */
void print_binary(unsigned long int n)
{
	int inti, intcount = 0;
	unsigned long int intcurrent;

	for (inti = 63; inti >= 0; inti--)
	{
		intcurrent = n >> inti;

		if (intcurrent & 1)
		{
			_putchar('1');
			intcount++;
		}
		else if (intcount)
			_putchar('0');
	}
	if (!intcount)
		_putchar('0');
}
