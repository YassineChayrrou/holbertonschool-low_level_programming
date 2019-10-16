#include "holberton.h"
#include <stdlib.h>
/**
  *create_array - create array of char and initize it with value of c
  *@size: takes size of array
  *@c: takes a char
  *Return: Array A
  */
char *create_array(unsigned int size, char c)
{
	int i;
	char *A;

	if (size == 0)
		return (0);
	else
	{
	A = malloc(sizeof(char) * size);
	if (A != '0')
	for (i = 0; i < size; i++)
	{
		A[i] = c;
		return (A);
	}
	return (0);
	}
}
