#include "lists.h"

/**
  * list_len -  prints all the elements of a list_t list
  * @h: points to the head of the list
  *
  * Return: number of element
  */

size_t list_len(const list_t *h)
{
	int num_of_element;
	const list_t *temp;

	temp = h;

	for (num_of_element = 0; temp != NULL; num_of_element++)
	{
		temp = temp->next;
	}

	return (num_of_element);
}
