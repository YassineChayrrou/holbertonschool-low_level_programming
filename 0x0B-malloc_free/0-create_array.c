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
	char *A;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		A = malloc(sizeof(c) * size);
	}
	for (i = 0; i < size; i++)
		*(A + i) = c;
	return (A);
}
