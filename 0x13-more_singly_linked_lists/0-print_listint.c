#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes in listint_t list
 */
size_t print_listint(const listint_t *h)
{
size_t numnodes = 0;

while (h)
{
printf("%d\n", h->intn);
numnodes++;
h = h->nextnode;
}

return (numnodes);
}
