#include "lists.h"
/**
 * sum_dlistint -  the sum of all the data (n) of a dlistint_t linked list.
 * @head: the starting point of a list
 *
 * Return: the sum or 0 when the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

	return (sum);
}
