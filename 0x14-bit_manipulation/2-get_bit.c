#include "main.h"

/**
  * get_bit -  returns the value of a bit at a given index.
  * @n: number whose index is required
  * @index: is the index, starting from 0 of the bit you want to get
  *
  * Return: the value of the bit at index index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size, num;
	char *ptr;

	unsigned int i = 0;

	if (n > 0)
		size = size_of_bin(n);
	else
		size = 1;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		printf("malloc error");
		return (1);
	}

	while (size > i)
	{
		ptr[i] = n % 2;
		n = n / 2;

		if (i == index)
		{
			num = ptr[i];
			free(ptr);
			return (num);
		}
		i++;
	}
	free(ptr);
	return (-1);
}

/**
  * size_of_bin - checks the size of number
  * @n: the number
  *
  * Return: size of the number
  */
int size_of_bin(unsigned long n)
{
	if (n == 0)
		return (0);
	else
		return (1 + size_of_bin(n >> 1));
}
