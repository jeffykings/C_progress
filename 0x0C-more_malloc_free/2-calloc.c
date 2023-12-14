#include <stdlib.h>
#include "main.h"

/**
  * _calloc -  allocates memory for an array, using malloc
  * @nmemb: no of elements
  * @size: size of each elements
  * Return: a Void pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);

	if (mem == NULL)
	{
		return (NULL);
	}

	_0intalza(mem, size);

	return (mem);
}

/**
  * _0intalza - intializes a void pointer with 0
  * @ptr: the void pointer
  * @size: size of the pointer
  *
  * Return: nothing
  */

void _0intalza(void *ptr, unsigned int size)
{
	int *p;
	unsigned int i;

	p = ptr;

	for (i = 0; i < size; i++)
	{
		p[i] = 0;
	}

}
