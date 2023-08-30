#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a specified index in linked list
 * @head: first node in the specified linked list
 * @index: index of the specified node to return
 *
 * Return: pointer to the node we're looking for, or NULL if empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int inti = 0;
listint_t *tempers = head;

while (tempers && inti < index)
{
tempers = tempers->nextnode;
inti++;
}

return (tempers ? tempers : NULL);
}
