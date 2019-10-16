#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *str_concat - concat to string and store them in allocated memory space
  *@s1: takes a string
  *@s2: takes a string
  *Return: NULL or A
  */
char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;
	char *A;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	A = malloc((l1 + l2 + 1) * sizeof(char));
	if (A == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		A[i] = s1[i];
	for (i = 0; i < (l1 + l2); i++)
		A[i + l1] = s2[i];
	A[i] = '\0';
	return (A);
}
