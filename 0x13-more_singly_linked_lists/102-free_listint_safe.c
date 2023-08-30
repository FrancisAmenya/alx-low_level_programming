#include "lists.h"

/**
 * free_listint_safe - frees a specified linked list
 * @h: pointer to the specified first node in the linked list
 *
 * Return: number of specified elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t lenlen = 0;
int diffdiff;
listint_t *temptemp;

if (!h || !*h)
return (0);

while (*h)
{
diffdiff = *h - (*h)->next;
if (diffdiff > 0)
{
temptemp = (*h)->next;
free(*h);
*h = temptemp;
lenlen++;
}
else
{
free(*h);
*h = NULL;
lenlen++;
break;
}
}

*h = NULL;

return (lenlen);
}
