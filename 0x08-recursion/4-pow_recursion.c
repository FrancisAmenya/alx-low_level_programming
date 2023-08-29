#include "main.h"

/**
 * _pow_recursion - returns the value of r raised to the power of p
 * @r: value to raise to power
 * @p: power of raising
 *
 * Return: result of the value after being powered
 */
int _pow_recursion(int r, int p)
{
	if (r < 0)
		return (-1);
	if (r == 0)
		return (1);
	return (r * _pow_recursion(r, p - 1));
}
