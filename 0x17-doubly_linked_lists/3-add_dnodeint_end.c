#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the pointer
 * @n: value to be added
 *
 * Return: address of new element on  success or Null when failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *newnode;

	tmp = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (tmp == NULL)
	{
		add_dnodeint(&(*head), n);
	}
	else
	{

		while (tmp->next)
		{
			tmp = tmp->next;
		}


		newnode->n = n;
		newnode->prev = tmp;
		newnode->next = NULL;
		tmp->next = newnode;
	}

	return (newnode);
}
