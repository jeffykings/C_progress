#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - concatenates two strings.
  * @s1: pointer to a character
  * @s2: ponter to a character
  * @n:  the first n bytes of s2
  *
  * Return: shall point to a newly allocated space in memory, which contains
  * s1, followed by the first n bytes of s2 or NULL if the function fails.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int j, len1, len2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	len1 = _lenstrn(s1);
	len2 = _lenstrn(s2);

	if (len2 <= n)
	{
		p =  con4_n_Less(s1, len1, len2);
	}
	else
	{
		p = con4_n_great(s1, len1, len2);
	}

	if (len2 <= n)
	{
		for (j = 0; j <= len2; len1++, j++)
		{
			p[len1] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++, len1++)
		{
			p[len1] = s2[j];
		}

		p[len1] = '\0';
	}

	return (p);
}

/**
  * _lenstrn - size of string
  * @str: takes string
  *
  * Return: integer size of strinf
  */

int _lenstrn(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
  * con4_n_Less - allocates a memory when len2 > n and also copies     s1 to
  * the memory
  * @s1: pointer to char
  * @len1: length of s1
  * @len2: leng of s2
  *
  * Return: pointer
  */

char *con4_n_Less(char *s1, int len1, int len2)
{
	char *p;
	int i;

	p = malloc((len1 + len2) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	return (p);
}

/**
  * con4_n_great - allocates a memory when len2 > n and also copies s1 to
  * the memory
  * @s1: pointer to char
  * @len1: length of s1
  * @len2: leng of s2
  *
  * Return: pointer
  */

char *con4_n_great(char *s1, int len1, int len2)
{
	char *p;
	int i;

	p = malloc((len1 + len2) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	return (p);
}
