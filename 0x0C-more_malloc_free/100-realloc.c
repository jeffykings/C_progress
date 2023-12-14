#include <stdlib.h>
#include "main.h"
/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: is a pointer to the memory previously allocated with a call to malloc
  * @old_size: is the size, in bytes, of the allocated space for ptr
  * @new_size: is the new size, in bytes of the new memory block
  *
  * Return: f new_size is equal to zero, and ptr is not NULL, then the call is
  * equivalent to free(ptr). Return NULL.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}
	if (new_size == old_size && ptr != NULL)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		free(ptr);

		return (newptr);
	}

	newptr = copystrn(ptr, old_size, new_size);

	free(ptr);

	return (newptr);
}

void *copystrn(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pp;
	char *old_ptr;
	unsigned int i;

	pp = malloc(new_size);
	old_ptr = ptr;

	if (pp == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size && ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
		{
			pp[i] = old_ptr[i];
		}
	}
	 if (new_size < old_size && ptr != NULL)
	 {
		 for (i = 0; i < new_size; i++)
		 {
			  pp[i] = old_ptr[i];
		 }
	 }
	return (pp);
}
