gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24#include "main.h"

/**
  * jack_bauer - prints every minute of the day from 00:00 to 23:59
  * Return: the return type is void
  */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
			{
				for (c = 48; c <= 53; c++)
				{
					for (d = 48; d <= 57; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}

	}
}
