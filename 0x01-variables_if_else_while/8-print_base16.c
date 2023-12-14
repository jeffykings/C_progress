#include <stdio.h>
/**
  * main - the entry point
  * Return: returns 0
  */

int main(void)
{
	int num = 48, alpha = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	while (alpha <= 102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}

