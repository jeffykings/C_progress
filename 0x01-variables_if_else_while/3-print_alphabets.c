#include <stdio.h>

/**
  * main- starting point. prints all the lowercase followed by uppercase
  * Return: 0 always successful
  */

int main(void)
{
	int a = 97;

	if (a == 97)
	{
		while (a <= 122)
		{
			putchar(a);
			a++;
		}
	}

	if (a == 122)
	{
		a = 65;

		while (a <= 90)
		{
			putchar(a);
			a++;
		}
	}

	putchar('\n');

	return (0);
}
