#include "main.h"

/**
  * print_triangle - prints a triangle using #
  * @size: accepts integer
  * Return: void
  */

void print_triangle(int size)
{
	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, a;

		for (i = 0; i < size; i++)
		{
			if (size > 1)
			{
				for (j = 1; j > size; j++)
				{
					_putchar(' ');
				}
			}

			for (a = size; a > 0; a--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
