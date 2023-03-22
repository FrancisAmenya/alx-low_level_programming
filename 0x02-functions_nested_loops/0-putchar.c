#include "main.h"

/**
 * main - entry point
 *
 * description - _putchar prototype
 *
 * Return: 0
 **/

int main(void)
{
	int i = 0;
	char s[] = "_putchar\n";

	while (s[i])
	{
		_putchar (s[i]);
		i++;
	}
	return (0);
}
