#include <stdio.h>
#include "holberton.h"
/**
  *binary_to_uint - converts binary to decimal base
  *@b: pointer to const char
  *Return: 0 or Result
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, Result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
	}
	i = i - 1;
	for (j = 0; b[j]; j++, i--)
	{
		if (b[j] == '1')
			Result += 1 << i;
	}
	return (Result);
}
