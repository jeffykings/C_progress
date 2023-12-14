#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
  * followed by a new line.
  * Return: always 0
  */

int main(void)
{
	long unsigned int i, j, a, b;

	a = b = 0;
	j = 1;

	for (i = 0; i  < 50; i++)
	{
		b = a + j;
		a = j;
		j = b;

		printf("%lu", b);

		if (i != 49)
		{
		printf(", ");
		}
	}
	putchar('\n');
	return (0);

}
