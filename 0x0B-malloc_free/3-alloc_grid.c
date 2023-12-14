#include <stdlib.h>

/**
  * alloc_grid -  pointer to a 2 dimensional array of integers.
  * @width: integer
  * @height: integer
  *
  * Return:  pointer to a 2 dimensional array of integers. or NULL on failure.
  */

int **alloc_grid(int width, int height)
{
	int **twoDarray;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	twoDarray = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		twoDarray[i] = malloc(width * sizeof(int));
	}

	if (twoDarray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			twoDarray[i][j] = 0;
		}
	}

		return (twoDarray);
}
