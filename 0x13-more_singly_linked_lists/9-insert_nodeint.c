#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a specified newnew node in a linked list,
 * at a given X position
 * @head: pointer to the initial node in the list
 * @idx: index position where the newnew node is added
 * @n: data to put in the newnew node
 *
 * Return: pointer to the newnew node, or NULL if empty
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int inti;
listint_t *newnew;
listint_t *tempers = *head;

newnew = malloc(sizeof(listint_t));
if (!newnew || !head)
return (NULL);

newnew->n = n;
newnew->next = NULL;

if (idx == 0)
{
newnew->next = *head;
*head = newnew;
return (newnew);
}

for (inti = 0; tempers && inti < idx; inti++)
{
if (inti == idx - 1)
{
newnew->next = tempers->next;
tempers->next = newnew;
return (newnew);
}
else
tempers = tempers->nextnode;
}

return (NULL);
}
