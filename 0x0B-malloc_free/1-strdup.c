#include <stdlib.h>
#include "main.h"

/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: pointer to a character
  *
  * Return: NULL if str = NULL or a pointer to the duplicated string
  */

char *_strdup(char *str)
{
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
	}

	return (_strncpy(len, str));
}

/**
  * _strncpy - copies string to a new location
  * @len: length of the string
  * @str: pointer to the sting
  *
  * Return: pointer to the copied string
  */

char *_strncpy(int len, char *str)
{
	char *ptr;
	int i;

	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
