#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: times table to print
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n < 0 || n > 15)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (y == 0)
				_putchar(z + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(z < 100 ? ' ' : (z / 100) + '0');
				_putchar(z < 10 ? ' ' : ((z / 10) % 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
