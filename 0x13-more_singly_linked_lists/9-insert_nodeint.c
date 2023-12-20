#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: beginning of the list
  * @idx: index of each node
  * @n: elelment to be added
  *
  * Return: added node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;

	unsigned int count = 0;
	listint_t *temp = *head;

	while (temp && count < idx)
	{
		if (count + 1 == idx)
		{
			newnode = malloc(sizeof(listint_t));
			if (newnode == NULL)
				return (NULL);

			newnode->n = n;
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}

		count++;
		temp = temp->next;
	}

	return (NULL);
}
