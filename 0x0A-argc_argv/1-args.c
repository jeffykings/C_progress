#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the number of arguments passed into it.
  * @argc: arguement count
  * @argv: array of strings. arguements passed
  * Return: Always 0
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
