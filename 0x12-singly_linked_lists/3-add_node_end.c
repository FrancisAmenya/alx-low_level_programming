#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - specified adds a newlist node at the end of a linked list
 * @head: specified double pointer to the list_t list
 * @str: specified string to put in the newlist node
 *
 * Return: address of the newlist element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *templist = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newlist = malloc(sizeof(list_t));
	if (!newlist)
		return (NULL);

	newlist->str = strdup(str);
	newlist->len = len;
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (newlist);
	}

	while (templist->next)
		templist = templist->next;

	templist->next = newlist;

	return (newlist);
}
