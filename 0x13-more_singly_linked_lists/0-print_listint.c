#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: points to the first node
  *
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
