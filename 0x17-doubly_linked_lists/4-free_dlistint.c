#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
/**		temp = head;
		head = head->next;
		free(temp);
		**/
		temp = head->next;
		free(head);
		head = temp;
	}
}
