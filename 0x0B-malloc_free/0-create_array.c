#include <stdlib.h>

/**
  * create_array -  creates an array of chars, and initializes it with a
  * specific char.
  * @size: size of the character
  * @c: character used for the initialization
  *
  * Return: Null size is zero or pointer pointer to the array.
  */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
