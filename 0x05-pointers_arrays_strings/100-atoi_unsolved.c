/**
  * _atoi - convert a string to an integer.
  * @s: point to a string
  * Return: int
  */

int _atoi(char *s)
{
	unsigned int i, postive, converted_pve;
	unsigned int result = 0;
	int sign, converted_nve, negative = 1;

	postive = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			  if ((s[i-1] >= '0' && s[i-1] <= 9) || (s[i-1] == ' '))
			  {
				  break;
			  }

			  continue;
		}

		else if (s[i] == '+' || s[i] == '-' || s[i] == ' ')
		{
			if (s[i] == '+' || s[i] == ' ')
			{
				postive *= 1;
			}
			else
			{
				negative *= -1;
			}
		}
		else
		{
			result = result * 10 + (s[i] - '0');
		}
	}
	sign = negative * postive;

	if (sign == -1)
	{
		converted_nve = sign * result;

		return (converted_nve);
	}
	else
	{
		converted_pve = sign * result;

		return (converted_pve);
	}
}
