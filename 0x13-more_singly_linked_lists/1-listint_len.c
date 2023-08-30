#include "lists.h"

/**
 * listint_len - returns the number of elements in any linked lists
 * @h: linked list of type listint_t to traverse through
 *
 * Return: number of nodes in listint_t
 */
size_t listint_len(const listint_t *h)
{
size_t numnodes = 0;

while (h)
{
numnodes++;
h = h->nextnode;
}

return (numnodes);
}
