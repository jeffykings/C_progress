/**
  * rev_string -  a function that reverses a string.
  * @s: pointer to a string
  * Return: Nothing
  */

void rev_string(char *s)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	for (i = 0; i < (j / 2); i++) 
	{
		char a;

		a = s[i];
		s[i] = s[j-1-i];
		s[j-1-i] = a;
	}
}
