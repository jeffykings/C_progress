#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name
  * @argc: integer, counts number of arguement
  * @argv: array of strings
  * Return: 0 Always
  */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
