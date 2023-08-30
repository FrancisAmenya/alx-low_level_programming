#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - specified ++ a new node at the beginning of a linked list
 * @head: specified double pointer to the list_t list
 * @str: specified newlist string to add in the node
 *
 * Return: specified the address of the newlist element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;
	unsigned int len = 0;

	while (str[len])
		len++;

	newlist = malloc(sizeof(list_t));
	if (!newlist)
		return (NULL);

	newlist->str = strdup(str);
	newlist->len = len;
	newlist->next = (*head);
	(*head) = newlist;

	return (*head);
}
