#include <stdio.h>

/**
  * main - the entyr point
  * Return: return 0
  */

int main(void)
{
	int a, n;

	for (n = 48; n <= 56; n++)
	{
		for (a = 49; a <= 57; a++)
		{
			if (a > n)
			{
				putchar(n);
				putchar(a);

				if (n != 56 || a != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
