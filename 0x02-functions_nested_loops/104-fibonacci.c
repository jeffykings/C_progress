#include <stdio.h>

/**
  * main - entry point
  * Return: always o
  */

int main(void)
{
	unsigned long int count, a, b, fibo;

	a = fibo = 0;
	b = 1;

	for (count = 0; count < 98; count++)
	{
		fibo = a + b;
		a = b;
		b = fibo;
		printf("%lu", fibo);

		if (count != 97)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
