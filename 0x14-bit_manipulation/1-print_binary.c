#include <stdio.h>
#include "holberton.h"
/**
  *print_binary - convert decimals to binary base hellYa
  *@n: long int to convert
  *byys
  */
void print_binary(unsigned long int n)
{
	unsigned long int m = n;
	if (m > 1)
		print_binary(m >> 1);
	putchar((m & 1) + '0');
}
