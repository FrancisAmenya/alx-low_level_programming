#include "lists.h"

/**
 * find_listint_loop - finds the specified loop in a linked list
 * @head: specified linked list to search for
 *
 * Return: specified address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slowslow = head;
listint_t *fastfast = head;

if (!head)
return (NULL);

while (slowslow && fastfast && fastfast->next)
{
fastfast = fastfast->next->next;
slowslow = slowslow->next;
if (fastfast == slowslow)
{
slowslow = head;
while (slowslow != fastfast)
{
slowslow = slowslow->next;
fastfast = fastfast->next;
}
return (fastfast);
}
}

return (NULL);
}
