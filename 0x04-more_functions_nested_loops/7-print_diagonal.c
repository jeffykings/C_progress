#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: accepts integer
  * Return: void
  */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			space(i);
			_putchar('\\');
			_putchar('\n');
		}

	}
}
/**
  * space - prints space on terminal
  * @a: accepts integer
  * Return: void
  */

void space(int a)
{
	int j;

	for (j = 2; j <= a; j++)
	{
		_putchar(' ');
	}
}
