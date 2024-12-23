#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to a list
 *
 * Return: always size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *temp;

	temp = h;
	n = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
