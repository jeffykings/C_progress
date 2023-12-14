int _prme(int n, int i);
/**
  * is_prime_number - checks if a natural number is prime.
  * @n: the integer
  * Return: 1 if the input integer is a prime number, otherwise 0.
  */

int is_prime_number(int n)
{
	return (_prme(n, 2));
}

/**
  * _prme - iterates for prime number
  * @n: The number
  * @i: Iterartor
  * Return: integer
  */
int _prme(int n, int i)
{
	if (n > 1 && i <= n)
	{
		if (n != i && n % i == 0)
		{
			return (0);
		}

		if (n == i)
		{
			return (1);
		}

		return (_prme(n, i +1));
	}
	else
	{
		return (0);
	}
}
