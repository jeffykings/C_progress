#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * positive_or_negative - assign a random number to the variable n each
  * time it is executed. Complete the source code in order to print whether
  * the number stored in the variable n is positive or negative.
  * @i: parameter is int
  * Return: nothing
  */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}

	else
	{
		printf("%d is negative\n", i);
	}
}
