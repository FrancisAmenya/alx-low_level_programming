#include "3-calc.h"
#include <stdio.h>

/**
 * main - a calculator
 * @argc: the size of argv
 * @argv: an array of arguments
 * Return: an answer
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]))
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
