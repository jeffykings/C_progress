#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc > 4)
	{
		printf("Error\n");

		exit (98);
	}
	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
			strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0 &&
			strcmp(argv[2], "%") != 0 )
	{
		printf("Error\n");

		exit (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	 if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	 {
		 printf("Error\n");

		 exit (100);
	 }

	 operation = get_op_func(argv[2]);
	 result = operation(num1, num2);
	 printf("%d\n", result);

	 return (0);
}
