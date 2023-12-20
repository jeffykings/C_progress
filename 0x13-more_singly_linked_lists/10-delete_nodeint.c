#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a listint_t
  * linked list
  * @head: beginning of the list
  * @index: To be deleted
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;

	unsigned int count = 0;

	temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && temp->next && count < index)
	{
		if (count + 1 == index)
		{
			del = temp->next;
			temp->next = temp->next->next;
			free(del);
			return (1);
		}
		count++;
		temp = temp->next;
	}

	return (-1);
}
