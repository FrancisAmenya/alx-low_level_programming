#include "lists.h"

/**
 * sum_listint - makes the intsum of all the data in a specified listint_t list
 * @head: initial node in the linked list
 *
 * Return: resulting intsum that was calculated
 */
int sum_listint(listint_t *head)
{
 int intsum = 0;
 listint_t *tempers = head;

 while (tempers)
 {
 intsum += tempers->intn;
 tempers = tempers->nextnode;
 }

 return (intsum);
}
