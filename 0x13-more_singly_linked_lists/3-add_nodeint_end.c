#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: beginning of the list
  * @n: add element
  *
  * Return: address of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	temp = *head;
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	return (newnode);
}
