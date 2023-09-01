#include "main.h"

/**
 * get_bit - returns specifier value of a bit at an index in a decimal number
 * @n: number specifier to search
 * @index: index specifier of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int intbit_val;

	if (index > 63)
		return (-1);

	intbit_val = (n >> index) & 1;

	return (intbit_val);
}
