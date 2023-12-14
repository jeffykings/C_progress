#include <stdlib.h>

/**
  * str_concat - function that concatenates two strings
  * @s1: pointer to string
  * @s2: pointer to string
  *
  * Return: pointer should point to a newly allocated space in memory
  * which contains the contents of s1, followed by the contents of s2, and
  * null terminated. Or NULL on failure.
  */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1, i, len2, j, sumlen;

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}

	sumlen = len1 + len2;
	
	p = (char *) malloc(sumlen * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL && s2 == NULL)
	{
		*p = '\0';

		return (p);
	}

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; i <= sumlen; i++, j++)
	{
		p[i] = s2[j];
	}

	return (p);
}
