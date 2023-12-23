#include "main.h"

/** 
  * flip_bits - that returns the number of bits you would need to flip to 
  * get from one number to another.
  * @n: the first value to be compared
  * @m: The second value to be compared
  * Return: unsigned int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int *ptr_n, *ptr_m;
	unsigned int i, count = 0;

	ptr_n = malloc(64 * sizeof(int));
	ptr_m = malloc(64 * sizeof(int));

	convert2bin(n, ptr_n, 64);
	convert2bin(m, ptr_m, 64);

	for (i = 0; i < 64; i++)
	{
		if (ptr_n[i] != ptr_m[i])
			count++;
	}

	free(ptr_n);
	free(ptr_m);
	return (count);
}

/**
  * convert2bin - converts dec to binary
  * @num: number to be converted
  * @ptr: pointer to the memmory where it will be stored
  * @size: number of bits 
  * Return: Nothing
  */
void convert2bin(unsigned long int num, int *ptr, int size)
{
	if (size <= 0)
		return;

	convert2bin(num >> 1, ptr, --size);
	ptr[size] = num & 1;
}
