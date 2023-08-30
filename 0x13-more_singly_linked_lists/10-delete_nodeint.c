#include "lists.h"

/**
 * delete_nodeint_at_index - removes a node linked list at a certain index
 * @head: pointer to the initial element in the list
 * @index: index of the node to remove
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempers = *head;
listint_t *listcurrent = NULL;
unsigned int inti = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->nextnode;
free(tempers);
return (1);
}

while (inti < index - 1)
{
if (!tempers || !(tempers->nextnode))
return (-1);
tempers = tempers->nextnode;
inti++;
}


listcurrent = tempers->nextnode;
tempers->nextnode = listcurrent->nextnode;
free(listcurrent);

return (1);
}
