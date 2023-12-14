#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments of your program.
  * @ac: number of arguements
  * @av: array of strings or 2d character
  *
  * Return: NULL if ac == 0 or av == NULL || a pointer to a new string, i
  * or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	int lenstrn = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			lenstrn++;
		}
		lenstrn++;
	}
	lenstrn++;

	p = malloc(lenstrn * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, len++)
		{
			p[len] = av[i][j];
		}

		p[len] = '\n';

		len++;
	}

	p[len] = '\0';

	return (p);
}
