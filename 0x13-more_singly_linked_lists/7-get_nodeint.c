#include "lists.h"

/**
 * get_nodeint_at_index - Nth nodea
 *
 * @head: pointer to head nodea
 *
 * @index: inta
 *
 * Return: listaint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}
	count = 0;

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
