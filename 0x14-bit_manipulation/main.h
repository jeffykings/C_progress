#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int size_of_bin(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_dec(const int *b, unsigned int size);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void convert2bin(unsigned long int num, int *ptr, int size);
int get_endianness(void);
#endif
