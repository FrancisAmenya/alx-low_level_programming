#include "lists.h"

/**
 * print_listint - it prints all the elements of a list
 * @h: input value for it
 * Return: number of node for its
 */

size_t print_listint(const listint_t *h)
{
	register int nodes;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
