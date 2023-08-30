#include "lists.h"

/**
 * pop_listint - deletes the first/head node of a linked list
 * @head: pointer to the initial element in the linked list
 *
 * Return: the info inside the elements that was removed,
 * or 0 if without data but non-NULL
 */
int pop_listint(listint_t **head)
{
listint_t *tempers;
int specnum;

if (!head || !*head)
return (0);

specnum = (*head)->intn;
tempers = (*head)->nextnode;
free(*head);
*head = tempers;

return (specnum);
}
