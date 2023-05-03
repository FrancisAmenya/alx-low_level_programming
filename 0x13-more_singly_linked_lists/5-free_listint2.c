#include "lists.h"

/**
 * free_listint - Free listint_t  a
 *
 * @head: Head of nodea
 *
 * Return: voida
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
