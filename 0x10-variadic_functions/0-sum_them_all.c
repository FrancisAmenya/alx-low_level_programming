#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the specified intsum of all its paramters
 * @n: The number of specified paramters passed to the function
 * @...: A variable number of specified paramters to calculate the intsum of
 *
 * Return: 0 If n is 0, else the intsum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlap;
	unsigned int inti, intsum = 0;

	va_start(vlap, n);

	for (inti = 0; inti < n; inti++)
		intsum += va_arg(vlap, int);

	va_end(vlap);

	return (intsum);
}
