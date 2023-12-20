#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list.
  * @head: beginning of the program
  *
  * Return: first node of the reversed list or Null if list is empty
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	nextnode = *head;
	prevnode = NULL;

	if (*head == NULL)
		return (*head);

	while (nextnode)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}

	*head = prevnode;
	return (*head);
}
