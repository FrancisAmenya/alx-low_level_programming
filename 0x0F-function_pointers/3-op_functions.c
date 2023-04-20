#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum of a and b
 * @a: an integer to add
 * @b: an integer to add
 * Return: sum if succesful
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - difference of a and b
 * @a: an integer to subtract
 * @b: an integer to subtract
 * Return: difference if succesful
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiply a and b
 * @a: an integer to multiply
 * @b: an integer to multiply
 * Return: multiplication of a and b if succesful
 */

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - divides a and b
 * @a: an integer to divide
 * @b: an integer to divide
 * Return: division if succesful
 */

int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
 * op_mod - Module of a and b
 * @a: an integer
 * @b: an integer
 * Return: remainder if succesful
 */

int op_mod(int a, int b)
{
	if (b)
		return ((a) % (b));
	printf("Error\n");
	exit(100);
}
