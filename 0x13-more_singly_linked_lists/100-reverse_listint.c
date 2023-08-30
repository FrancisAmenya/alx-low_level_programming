#include "lists.h"

/**
 * reverse_listint - reverses a specified linked list
 * @head: pointer to the initial node in the list
 *
 * Return: pointer to the first node in the new  specified list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *listprev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = listprev;
listprev = *head;
*head = next;
}

*head = listprev;

return (*head);
}
