#include <stdlib.h>
#include "lists.h"

/**
 * free_list - specified frees a linked list
 * @head: specified list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *templist;

	while (head)
	{
		templist = head->next;
		free(head->str);
		free(head);
		head = templist;
	}
}
