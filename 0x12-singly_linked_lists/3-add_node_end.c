#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: beginning of the list
  * @str: new element in the list
  *
  * Return: pointer to new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = newnode;
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);

	return (newnode);

}
