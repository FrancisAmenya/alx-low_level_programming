#include "lists.h"

/**
 * add_nodeint -   aAdds a new node at the beginning
 *
 * @head: a struct
 *
 * @n: const for  int
 *
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
