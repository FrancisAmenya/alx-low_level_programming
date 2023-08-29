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
	if (p < 0)
		return (-1);
	if (p == 0)
		return (1);
	return (p * _pow_recursion(p, r - 1));
}
