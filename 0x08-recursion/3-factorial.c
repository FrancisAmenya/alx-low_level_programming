#include "main.h"

/**
 * factorial - function to return the factorial of a number
 * @f: number to return the factorial from
 *
 * Return: factorial calculation of f
 */
int factorial(int f)
{
	if (f < 0)
		return (-1);
	if (f == 0)
		return (1);
	return (f * factorial(f - 1));
}
