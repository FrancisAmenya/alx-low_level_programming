#include "lists.h"

/**
 * add_nodeint - adds a newnew node at the beginning of a linked list
 * @head: pointer to the first node in the linked list
 * @n: data to insert in that newnew node
 *
 * Return: pointer to the newnew node, can't be NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnew;

newnew = malloc(sizeof(listint_t));
if (!newnew)
return (NULL);

newnew->n = n;
newnew->next = *head;
*head = newnew;

return (newnew);
}
