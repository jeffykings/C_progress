#include "main.h"

/**
  * times_table - this prints 9 times table, starting with 0
  * Return: returns nothing
  */

void times_table(void)
{
	int c = 0;
	int a, b, d;
	int e = -1;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		_putchar(b + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	
		for (d = 0; d < 9; d++)
		{
			b += c;
			
			if (b <= 9)
			{
				_putchar(b + '0');

				if (d != 8)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}		
			}
			else
			{
				_putchar(e + '0');
				_putchar((b%10) + '0');

				if ( d != 8)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		e++;
		_putchar('\n');
		c++;
	}
}
