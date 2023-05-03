#include "lists.h"

/**
 * sum_listint - Sum of all data (n)a
 *
 * @head: Head of nodea
 *
 * a
 * Return: voida
 */

int sum_listint(listint_t *head)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
