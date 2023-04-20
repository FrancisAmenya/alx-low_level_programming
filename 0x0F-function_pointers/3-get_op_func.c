#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - it chooses the correct function to perform
 *
 * @s: operator parsed as an argument
 * Return: the pointer to function
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
