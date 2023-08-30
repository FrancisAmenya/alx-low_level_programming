#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_vlstrings - Prints specified vlstrings, followed by a new line.
 * @separator: The specified string to be printed between vlstrings.
 * @n: The specified number of vlstrings passed to the function.
 * @...: A specified variable number of vlstrings to be printed.
 *
 * Description: If specified separator is NULL, it is not printed.
 *              else one of the vlstrings if NULL, (nil) is printed instead.
 */
void print_vlstrings(const char *separator, const unsigned int n, ...)
{
	va_list vlstrings;
	char *charstr;
	unsigned int uintindex;

	va_start(vlstrings, n);

	for (uintindex = 0; uintindex < n; uintindex++)
	{
		charstr = va_arg(vlstrings, char *);

		if (charstr == NULL)
			printf("(nil)");
		else
			printf("%s", charstr);

		if (uintindex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vlstrings);
}
