#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list, and returns
  * the head node’s data (n).
  * @head: beginning of the list
  *
  * Return: The deleted head or 0 if empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int element;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	element = (*head)->n;

	free(*head);
	*head = temp;

	return (element);
}
