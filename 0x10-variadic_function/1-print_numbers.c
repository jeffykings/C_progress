#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * print_numbers - prints numbers, followed by a new line.
  * @separator: the string to be printed between numbers
  * @n: the number of integers passed to the function
  *
  * Return: Nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list prnt;

	va_start(prnt, n);

	if (separator == NULL)
	{
		exit(1);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prnt, int));

		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(prnt);
}
