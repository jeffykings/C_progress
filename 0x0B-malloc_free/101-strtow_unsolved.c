#include <stdlib.h>
#include "main.h"

/**
  * strtow - splits a string into words
  * @str: pointer to a character, string
  *
  * Return: a pointer to an array of strings (words), NULL if str == NULL 
  * or str == "" or function fails.
  */

char **strtow(char *str)
{
	char **strn2D;
	char *cpystr;
	int i, j, rowlen, _strnlen;

	_strnlen = 0;
	rowlen = 1;

	if ( str == NULL || *str == '\0')
	{
		return (NULL);
	}

	cpystr = malloc(stringlen(str) * sizeof(char));

	if (cpystr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= stringlen(str); i++)
	{
		cpystr[i] = str[i];
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}
		if (str[i - 1] == ' ' && str[i] != ' ')
		{
			rowlen++;
		}

		_strnlen++;
	}

	strn2D = malloc(rowlen * sizeof(char *));

	for (i = 0; i < rowlen; i++)
	{
		strn2D[i] = malloc(colunmlen(cpystr) * sizeof(char));

		if (strn2D[i] == NULL)
		{
			return (NULL);
		}
	}

	free(cpystr);

	while (1)
	{
		if (*str == ' ')
		{
			str++;
			continue;
		}

		for (i = 0; i < rowlen; i++)
		{
			for (j = 0; *str != ' ' && *str != '\0' ; j++, str++)
			{
				strn2D[i][j] = *str;
			}

			strn2D[i][j] = '\0';
			j++;

			while (*str == ' ')
			{
				str++;
			}
		}
		strn2D[i][0] = '\0';

		break;
	}

	return (strn2D);
}

/**
  * stringlen - checks the length of string
  * @str: string
  *
  * Return: integer ie length of strinf
  */

int stringlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
  * colunmlen - check the number of columns in each row
  * @cpystr: string
  *
  * Return: integer
  */

int colunmlen(char *cpystr)
{
	int i = 0;

	while (*cpystr != '\0')
	{
		if (*cpystr != ' ' && *(cpystr - 1) != ' ')
		{
			cpystr++;
			i++;
		}
		if (*cpystr == ' ' && *(cpystr - 1) != ' ')
		{
			return (i);
		}

		cpystr++;
	}

	return (i);
}
