#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints specified numbers, followed by a new line.
 * @separator: The specified string to be printed between numbers.
 * @n: The number specified of integers passed to the function.
 * @...: A variable specified number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlnums;
	unsigned int intindex;

	va_start(vlnums, n);

	for (intindex = 0; intindex < n; intindex++)
	{
		printf("%d", va_arg(vlnums, int));

		if (intindex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vlnums);
}
