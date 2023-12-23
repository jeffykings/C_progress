#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: pointer to the binary to be converted
  * Return: the converted number, else 0 if there is one or more chars in the
  * string b that is not 0 or 1 or b is NULLi
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, len, num;
	char str[2];

	sum = 0;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;

	while (*b)
	{
		if (*b == '1' || *b == '0')
		{
			str[0] = *b;
			str[1] = '\0';

			num = atoi(str);
			sum += (num * (1 << len));
		}
		else
			return (0);
		len--;
		b++;
	}

	return (sum);
}
