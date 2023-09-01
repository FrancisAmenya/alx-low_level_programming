#include "main.h"

/**
 * flip_bits - counts specifier the number of bits to change
 * to specifier get from one number to another
 * @n: first specifier number
 * @m: second specifier number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ui, intcount = 0;
	unsigned long int intcurrent;
	unsigned long int intexclusive = n ^ m;

	for (ui = 63; ui >= 0; ui--)
	{
		intcurrent = intexclusive >> ui;
		if (intcurrent & 1)
			intcount++;
	}

	return (intcount);
}
