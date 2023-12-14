/**
  * _strlen_recursion - returns the length of a string.
  * @s: pointer to string
  * Return: integer
  */

int _strlen_recursion(char *s)
{
	int x = 1;

	if (*s == '\0')
	{
		return (0);
	}

	return (x + _strlen_recursion(s + 1));
}
