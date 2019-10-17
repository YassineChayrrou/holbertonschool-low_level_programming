#include "holberton.h"
#include <stdlib.h>
/**
  * malloc_checked - function that allocates memory using malloc
  * @b: takes in an unsigned integer
  * Return: num
  */
void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	return (num);
}
