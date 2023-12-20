#include "lists.h"

/**
  * print_listint_safe - prints all the elements of a listint_t list
  * @head: points to the first node
  *
  * Return: the number of nodes
  */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *loopchecker;
	int postchecker;

	int count = 0;

	current = head;
	loopchecker = NULL;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		postchecker = 0;
		current = current->next;
		loopchecker = head;

		while (postchecker < count)
		{
			if (loopchecker == current)
			{
				printf("->[%p] %d\n", (void *)loopchecker, loopchecker->n);
				exit(98);
			}
			postchecker++;
			loopchecker = loopchecker->next;
		}
		count++;
	}

	if (!head)
		exit(98);

	return (count);
}
