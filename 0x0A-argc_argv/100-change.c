#include <stdio.h>
#include <stdlib.h>

/**
  *
   main - prints the minimum number of coins to make change for an amount of
   * money.
   * @argc: arguement counter
   * @argv: array of string
   * Return: if the number of arguments passed to your program is not 
   * exactly 1, print Error, followed by a new line, and return 1 else return 0
   */

int main(int argc, char *argv[])
{
	int count;

	if (argc == 2)
	{
		int i, num, swap = 0;

		count = atoi(argv[1]);

		if (count > 0)
		{
			for (i = 0; count != 0 ; i++)
			{
				if (count < 2 && count >= 1)
				{
					num = count / 1;
					count = count - (((count / 1)) * 1);
					swap = swap + num;
				}
				else if (count < 5 && count >= 2)
				{
					num = count / 2;
					count = count - (((count / 2)) * 2);
					swap = swap + num;
				}
				else if (count < 10 && count >= 5)
				{
					num = count / 5;
					count = count - (((count / 5)) * 5);
					swap = swap + num;
				}
				else if (count < 25 && count >= 10)
				{
					num = count / 10;
					count = count - (((count / 10)) * 10);
					swap = swap + num;
				}
				else 
				{
					num = count / 25;
					count = count - (((count / 25)) * 25);
					swap = swap + num;
				}
			}

			printf("%d\n", swap);
		}
		else 
		{
			printf("0\n");
		}

		return (0);

	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
