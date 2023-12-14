/**
  * swap_int - swaps the values of two integers
  * @a: pointer to an int
  * @b: point to an int
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
