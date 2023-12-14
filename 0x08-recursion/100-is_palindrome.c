#include "main.h"
/**
  * is_palindrome - checks for palindrome.
  * @s: pointer to the string.
  * Return: 1 if a string is a palindrome and 0 if not.
  */

int is_palindrome(char *s)
{
	char array[100];
	char temp = 'a';
	int result, len, lenDiv2;

	len = _lenstring(s, 0);
	lenDiv2 = len / 2;

	cpystring(s, array, 0);
	_swap(array, len, lenDiv2, temp, 0);

	result = compare(s, array, 0);

	return (result);
}

/**
  * _lenstring - checks the string length
  * @s: pointer to string
  * @i: integer counter
  * Return: length of string
  */

int _lenstring(char *s, int i)
{
	if (s[i] != '\0')
	{
		return (_lenstring(s, i + 1));
	}

	return (i);
}

/**
  * cpystring - copies a string
  * @s: pointer to a string to be copied
  * @array: pointer to copied string
  * @i: counter
  * Return: Always nothing
  */

void cpystring(char *s, char *array, int i)
{
	if (s[i] == '\0')
	{
		return;
	}
	array[i] = s[i];

	cpystring(s, array, i + 1);
}

/**
  * _swap - reverses string
  * @array: pointer to an array
  * @len: length of string
  * @lenDiv2: length of string divided by 2
  * @temp: temporal variable for storing character.
  * @i: counter
  * Return: Nothing
  */

void _swap(char *array, int len, int lenDiv2, char temp, int i)
{
	if (lenDiv2 != 0)
	{
		temp = array[i];
		array[i] = array[len - 1];
		array[len - 1] = temp;

		_swap(array, len - 1, lenDiv2 - 1, temp, i + 1);
	}
}

/**
  * compare - compares two string
  * @s: pointer to the string to be compared
  * @array: pointer to the string to be compared
  * @i: counter
  * Return: 1 if a string is same and 0 if not.
  */

int compare(char *s, char *array, int i)
{
	if (s[i] != array[i])
	{
		return (0);
	}

	if (s[i] == '\0' && s[i - 1] == array[i - 1])
	{
		return (1);
	}

	return (compare(s, array, i + 1));
}
