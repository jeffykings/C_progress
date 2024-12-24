#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @index: the position to be returned
 * @head: head of the list
 *
 * Return: the address of the position
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	temp = head;

	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	if (i == index)
	{
		return (temp);
	}
	else
		return (NULL);
}
