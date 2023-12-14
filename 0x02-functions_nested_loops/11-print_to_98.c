#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - function that all natural numbers
  * @n: this parameter takes int
  * Return: returns void
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}

			else
			{
				printf("%d", n);
			}
		}

		printf("\n");
	}

	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}

			else
			{
				printf("%d", n);
			}
		}

		printf("\n");
	}
}
