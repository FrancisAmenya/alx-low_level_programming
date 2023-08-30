#include "lists.h"

/**
 * free_listint - frees a specified linked list
 * @head: listint_t list to be freed by the function
 */
void free_listint(listint_t *head)
{
 listint_t *tempers;

 while (head)
 {
 tempers = head->nextnode;
 free(head);
 head = tempers;
 }
}
