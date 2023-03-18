#include <stdio.h>
/**
* main - print lowercase a-z, without q and e
* description - uses while statement
* Return: Always 0 (Success)
*/
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == 'q' || d == 'e')
		continue;

		putchar(d);
	}

	putchar('\n');
	return (0);
}
