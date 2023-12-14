#include "main.h"

/**
 * print_alphabet - prints all the lower case
 * Return: it doesnt return anything
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
