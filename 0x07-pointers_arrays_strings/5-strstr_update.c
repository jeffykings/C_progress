#include <stddef.h>
/**
  * _strstr - locates a substring.
  * @haystack: A pointer to the null-terminated string to be searched.
  * @needle: A pointer to the null-terminated string representing the
  * substring to search for.
  * Return: a pointer to the beginning of that occurrence in the haystack.
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 1;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			haystack++;
			needle++;

			for (; *haystack != '\0' && *needle != '\0';)
			{
				if (*haystack == *needle)
				{
					needle++;
					haystack++;
					i++;
				}
				else
				{
					return (NULL);
				}
			}

			haystack -= i;

			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
