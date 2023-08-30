#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - specifier allocates memory using malloc
 * @b: specifier number of bytes to allocate
 *
 * Return: specifier a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
