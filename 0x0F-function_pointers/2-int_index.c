#include "function_pointers.h"

/**
 * int_index - a function searching for an int
 * @array: the array of integers
 * @size: the size of array
 * @cmp: a pointer to the function to be used to compare values
 * Return: returns an index when match is found or -1 if fails
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
