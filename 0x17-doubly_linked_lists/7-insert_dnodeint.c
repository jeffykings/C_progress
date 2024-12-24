#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: starting point of the list
 * @idx: the position to be added
 * @n: the value to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;

	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(&(*h), n));

	 newnode = malloc(sizeof(dlistint_t));
	 if (newnode == NULL)
		 return (NULL);

	while (temp)
	{
		if (i  == idx)
		{
			newnode->n  = n;
			(temp->prev)->next = newnode;
			newnode->prev = temp->prev;
			newnode->next = temp;
			temp->prev = newnode;
			
			return (newnode);

		}
		temp = temp->next;
		i++;
	}

	if (temp == NULL && i == idx)
		return (add_dnodeint_end(&(*h), n));

	return (NULL);
}
