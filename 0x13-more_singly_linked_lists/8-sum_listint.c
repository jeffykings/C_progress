#include "lists.h"

/**
  * sum_listint -  sum of all the data (n) of a listint_t linked list.
  * @head: beginning of the list
  * Return: sum of the data
  */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	sum = 0;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
