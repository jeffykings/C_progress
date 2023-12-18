#include "lists.h"

/**
  * add_nodeint -  adds a new node at the beginning of a listint_t list
  * @head: points to the beginning of the list
  * @n: new element
  *
  * Return: address of the new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
