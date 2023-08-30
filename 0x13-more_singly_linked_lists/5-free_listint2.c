#include "lists.h"

/**
 * free_listint2 - frees a given linked list
 * @head: pointer to any specified listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *tempers;

if (head == NULL)
return;

while (*head)
{
tempers = (*head)->next;
free(*head);
*head = tempers;
}

*head = NULL;
}
