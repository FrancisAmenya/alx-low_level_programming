#include "lists.h"

/**
 * find_listint_loop - Finds loop in linked lista
 *
 * @head: Pointer to heada
 *
 * a
 * Return: listint_ta
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	if (!head)
	{
		return (NULL);
	}

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
