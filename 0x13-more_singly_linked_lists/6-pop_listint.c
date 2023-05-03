#include "lists.h"
/**
 * pop_listint - Remove node from topa
 *
 *@head: pointer to head nodea
 *
 * Return: inta
 */

int pop_listint(listint_t **head)
{
	int index = 0;
	listint_t *new_node = *head;

	if (new_node)
	{
		index = new_node->n;
		*head = new_node->next;
	}
		free(new_node);
		return (index);
}
