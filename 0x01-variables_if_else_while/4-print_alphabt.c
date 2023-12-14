#include <stdio.h>

/**
  * main - the entry point of the program
  * Return: returns 0
  */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
			putchar('\n');
		}

		alpha++;
	}

	return (0);

}
