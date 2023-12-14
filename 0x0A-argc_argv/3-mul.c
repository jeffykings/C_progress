#include <stdio.h>
#include <stdlib.h>

/**
  * main -  multiplies two numbers
  * @argc: counts arguement
  * @argv: array of strings
  * Return: 0 for success, 1 not receive two arguments
  */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		
		printf("%d\n", num1 * num2);
	
		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
