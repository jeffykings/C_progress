#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_strings - prints strings, followed by a new line.
  * @separator: string to be printed between the strings
  * @n: the number of strings passed to the function
  *
  * Return: Nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *strng;
	unsigned int i;
	va_list prntstrng;

	va_start(prntstrng, n);

	if (separator == NULL)
	{
		exit(1);
	}

	for (i = 0; i < n; i++)
	{
		strng = va_arg(prntstrng, char *);

		if (strng == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", strng);
		}
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(prntstrng);
}
