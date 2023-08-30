#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodesnum
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodesnum in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *ftortoise, *thehare;
size_t nodesnum = 1;

if (head == NULL || head->nextnode == NULL)
return (0);

ftortoise = head->nextnode;
thehare = (head->nextnode)->nextnode;

while (thehare)
{
if (ftortoise == thehare)
{
ftortoise = head;
while (ftortoise != thehare)
{
nodesnum++;
ftortoise = ftortoise->nextnode;
thehare = thehare->nextnode;
}

ftortoise = ftortoise->nextnode;
while (ftortoise != thehare)
{
nodesnum++;
ftortoise = ftortoise->nextnode;
}

return (nodesnum);
}

ftortoise = ftortoise->nextnode;
thehare = (thehare->nextnode)->nextnode;
}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t specified list safely.
 * @head: A pointer to the specified head of the listint_t list.
 *
 * Return: The specified number of nodesnum in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodesnum, index = 0;

nodesnum = looped_listint_len(head);
if (nodesnum == 0)
{
for (; head != NULL; nodesnum++)
{
printf("[%p] %d\n", (void *)head, head->intn);
head = head->nextnode;
}
}

else
{
for (index = 0; index < nodesnum; index++)
{
printf("[%p] %d\n", (void *)head, head->intn);
head = head->nextnode;
}

printf("-> [%p] %d\n", (void *)head, head->intn);
}

return (nodesnum);
}
