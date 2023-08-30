#include <stdlib.h>
#include "lists.h"

/**
 * list_len - specified returns the number of elements in a linked list
 * @h: specified pointer to the list_t list
 *
 * Return: specified number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nst = 0;

	while (h)
	{
		nst++;
		h = h->next;
	}
	return (nst);
}
