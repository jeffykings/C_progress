#include <stdio.h>

/**
  * main - entry point
  * Return: returns 0
  */

int main(void)
{
	int a1, a2;
	int b1 = 48;
	int b2 = 47;

	for (a1 = 48; a1 <= 57; a1++)
	{
		for (a2 = 48; a2 <= 56; a2++)
		{
			putchar(a1);
			putchar(a2);
			putchar(' ');

			for ( b1 = 48; b1 <= 57; b1++)
			{
				for (b2 = 47; b2 <= 57; b2++)
				{
					putchar(b1);
					putchar(b2);
				}
			}
		if ( a1 != 57 || a2 != 56 || b1 != 57 || b2 != 57)
		{
			putchar(',');
			putchar(' ');
		}
					
		}
	}
		
	
	putchar('\n');
	return (0);
}
