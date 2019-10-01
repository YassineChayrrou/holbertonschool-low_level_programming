#include "holberton.h"
/**
  *swap_int - swaps the value of two integers
  *@a: pointer to a
  *@b: pointer to b
  *Return: Always 0
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
