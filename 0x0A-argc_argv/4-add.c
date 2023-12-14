#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers. If no number is passed print 0
  * @argc: arguement counter
  * @argv: array of strings
  * Return: If one of the number contains symbols that are not digits,
  * print Error, followed by a new line, and return 1 else return 0
  */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if ( argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int j = 0;

			while(argv[i][j] != '\0')
			{
				if (argv[i][j] >= 48 && argv[i][j] <= 57)
				{
					j++;
				}
				else
				{
					printf("Error\n");

					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
