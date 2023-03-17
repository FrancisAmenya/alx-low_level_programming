#include <stdio.h>
#include <unistd.h>

/**
 * main - prints an assigned text then goes to a new li to the standardd error o
 * Return: 0 is a good output, others have failed
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
