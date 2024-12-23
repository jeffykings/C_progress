#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the pointer
 * @n: value to be added
 *
 * Return: new head address on  success or Null when failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
		(*head)->prev = newnode;

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;

	return (newnode);

}
