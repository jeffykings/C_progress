#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  * @head: pointer to the beginning of list
  *
  * Return: Nothin
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (*head == NULL)
		return;

	while (*head)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}

	*head = NULL;
}
