#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *
  *
  *
  */
char *_strdup(char *str)
{
	char *A;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	A = malloc((len + 1) * sizeof(char));
	if (A == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		*(A + i) = *(str + i);
	A[i] = '\0';
	return (A);
}
