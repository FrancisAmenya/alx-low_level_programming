#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints specified anything
 * @format: vllist of types of specified arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int inti = 0;
char *charstr, *charsep = "";

va_list vllist;

va_start(vllist, format);

if (format)
{
while (format[inti])
{
switch (format[inti])
{
case 'c':
printf("%s%c", charsep, va_arg(vllist, int));
break;
case 'i':
printf("%s%d", charsep, va_arg(vllist, int));
break;
case 'f':
printf("%s%f", charsep, va_arg(vllist, double));
break;
case 's':
charstr = va_arg(vllist, char *);
if (!charstr)
charstr = "(nil)";
printf("%s%s", charsep, charstr);
break;
default:
inti++;
continue;
}
charsep = ", ";
inti++;
}
}

printf("\n");
va_end(vllist);
}
