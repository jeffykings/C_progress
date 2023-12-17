#include "lists.h"

/**
  * add_node - a new node at the beginning of a list_t list
  * @head: beginner of the list and points to first element
  * @str: string to be added
  *
  * Return: NULL for failure or address of new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	*head = temp;
	temp->str = strdup(str);
	temp->len = strlen(temp->str);

	return (temp);
}
