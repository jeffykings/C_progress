#include <stdio.h>

/**
  * main - entry point
  * Return: always o
  */

int main(void)
{
	unsigned long int even, i, a, b, fibo;

	a = fibo = even = 0;
	b = 1;

	for (i = 0;; i++)
	{
		fibo = a + b;
		a = b;
		b = fibo;
		if (fibo < 4000000)
		{
			if ((fibo % 2) == 0)
				even += fibo;
		}
		else
		{
			break;
		}
	}

	printf("%lu \n", even);

	return (0);
}
