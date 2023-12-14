#include "main.h"

/**
  * more_numbers - prints numbers from 0 - 14 10 times
  * Return: void
  */

void more_numbers(void)
{
	int j, i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
		_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
