#include "main.h"

/**
  * get_endianness - that checks the endianness
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	unsigned long int num = 0x4e7a6d;

	char *ptr = (char *)&num;

	if (*ptr == 4)
		return (0);
	else
		return (1);
}
