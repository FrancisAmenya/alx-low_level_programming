#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - specified prints each array elem on a newl
 * @array: specified array
 * @size:  specified how many elem to print
 * @action:  specified pointer to print in regular or hex
 * Return: specified void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
