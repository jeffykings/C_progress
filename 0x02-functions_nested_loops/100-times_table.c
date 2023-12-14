#include "main.h"

/**
  * print_times_table - prints the n times table, starting with 0
  * @n: accepts int parameter
  */

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j, a;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				a = i * j;
				if (j == 0)
				{
					_putchar(a + '0');
				} else if (j != 0 && a < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(a + '0');
				} else if (a > 9 && a < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((a / 100) + '0');
					_putchar(((a % 100) / 10) + '0');
					_putchar((a % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
