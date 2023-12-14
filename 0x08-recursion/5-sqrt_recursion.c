int _sqrt(int n, int i);
/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: number we are looking for the square
  * Return: The square root. If n does not have a natural square root,
  * the function should return -1
  */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - checks for the square root
  * @n: interger we are looking for
  * @i: different iterations
  * Return: integer
  */

int _sqrt(int n, int i)
{
	int sqrot;

	sqrot = i * i;

	if (sqrot > n)
	{
		return (-1);
	}

	if (sqrot == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
