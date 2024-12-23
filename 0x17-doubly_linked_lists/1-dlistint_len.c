#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list.
 * @h: pointer to a list
 *
 * Return: always size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *temp;

	temp = h;
	n = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
