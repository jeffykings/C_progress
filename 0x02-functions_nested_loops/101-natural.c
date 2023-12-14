#include <stdio.h>

/**
  * sum_multiple_3_5 - computes and prints the sum of all the multiples
  * of 3 or 5 below 1024
  * Return: nothing
  */

void sum_multiple_3_5(void)
{
	unsigned int i, a;

	a = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			a += i;
		}
	}

	printf("%u\n", a);
}
