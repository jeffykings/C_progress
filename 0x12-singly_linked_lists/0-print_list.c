#include "lists.h"

/**
  * print_list -  prints all the elements of a list_t list
  * @h: points to the head of the list
  *
  * Return: number of element
  */

size_t print_list(const list_t *h)
{
	int num_of_element;
	const list_t *temp;

	temp = h;

	for (num_of_element = 0; temp != NULL; num_of_element++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
	}

	return (num_of_element);
}
