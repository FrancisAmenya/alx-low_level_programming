#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the newnew element for the list
 *
 * Return: pointer to the newnew node, can't be NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnew;
listint_t *tempers = *head;

newnew = malloc(sizeof(listint_t));
if (!newnew)
return (NULL);

newnew->n = n;
newnew->next = NULL;

if (*head == NULL)
{
*head = newnew;
return (newnew);
}

while (tempers->next)
tempers = tempers->next;

tempers->next = newnew;

return (newnew);
}
