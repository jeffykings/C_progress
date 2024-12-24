#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes a node at a given position.
 * @head: starting point of the list
 * @index: the position to be added
 *
 * Return: 1, or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (index == 0 && temp)
	{
		*head  = temp->next;
		if (*head != NULL)
			(*head)->prev =NULL;
		free(temp);	
		return (1);
	}

	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	
	if (i == index && temp)
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
		free(temp);

		return (1);
	}

	return (-1);
}
