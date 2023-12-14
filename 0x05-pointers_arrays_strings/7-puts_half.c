#include "main.h"

/**
  * puts_half - prints half of a string, followed by a new line.
  * @str: pointer to a string
  * Return: Nothing
  */

void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;

		for (; n <= len; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}
	else
	{
		n = len / 2;

		for (; n <= len; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}
}
