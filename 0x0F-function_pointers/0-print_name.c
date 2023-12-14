/**
  * print_name - prints a name
  * @name: pointer to character
  * @f: pointer to function
  *
  * Return: Nothing Always
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
