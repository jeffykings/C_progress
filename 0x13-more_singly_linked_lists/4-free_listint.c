#include "lists.h"

/**
  * free_listint - frees a listint_t list.
  * @head: pointer to the beginning of list
  *
  * Return: Nothin
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
