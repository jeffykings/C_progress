#include <stdio.h>

int main()
{
	int j, i, temp1, num, is_palindrome;
	int str[10];

	int idx, idx2;
	int bigger = 0;

	for (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			num = temp1 = i * j;

			idx = 0;

			while (temp1 != 0)
			{
				str[idx] = temp1 % 10;
				temp1 =  temp1 / 10;
				idx++;
			}

			idx2 = 0;
			is_palindrome = 1;
			while (idx2 < idx / 2)
			{
				if (str[idx2] != str[idx - idx2 - 1])
				{
					is_palindrome = 0;
					break;
				}
				idx2++;
			}

			if (is_palindrome  && num > bigger)
				bigger = num;
		}
	}

	printf("the highest palindrome is %d\n", bigger);
	return (0);
}
