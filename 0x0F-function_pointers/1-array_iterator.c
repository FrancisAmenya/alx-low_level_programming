#include "function_pointers.h"

/**
 * array_iterator - function that executes another(function) as a parameter
 * @array: array of parameters to execute here
 * @size: size of the array there
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size)
		for (i = 0; i < size; i++)
			action(array[i]);
}
