#include <stdlib.h>

/**
  *  array_range - creates an array of integers.
  * @min: minimum value
  * @max: maximum value
  *
  * Return: pointer to an array
  */

int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		ptr[j] = i;
	}

	return (ptr);
}
