#include <stdio.h>
#include "holberton.h"
/**
  *print_binary - convert decimals to binary base hellYa
  *@n: long int to convert
  *byys
  */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
