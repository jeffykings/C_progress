#include <stdarg.h>

/**
  * sum_them_all -  returns the sum of all its parameters.
  * @n: number of unname arguements
  *
  * Return: integer
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}

	va_end(sum);
	return (result);
}
