#include <stdio.h>

/**
  * main- entry point prints alpabets in lowercase followed by new line
  * Return: always 0 (success)
  */

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
