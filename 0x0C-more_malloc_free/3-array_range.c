#include <stdlib.h>
#include "main.h"

/**
 * *array_range - specifier creates an array of integers
 * @min: specifier minimum range of values stored
 * @max: specifier maximum range of values stored and number of elements
 *
 * Return: specifier pointer to the new array
 */
int *array_range(int min, int max)
{
int *ptr;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
ptr[i] = min++;

return (ptr);
}
