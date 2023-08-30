#include <stdio.h>
#include "lists.h"

/**
 * print_list - specified prints all the elements of a linked list
 * @h: specified pointer to the list_t list to print
 *
 * Return: the int specified number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t st = 0;

while (h)
{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	st++;
}

return (st);
}
