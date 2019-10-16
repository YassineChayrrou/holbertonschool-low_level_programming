#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strlen - find string length
  * @s: takes in string
  * Return: i
  *
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  *str_concat - concat to string and store them in allocated memory space
  *@s1: takes a string
  *@s2: takes a string
  *Return:
  */
char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2;
	char *A;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	A = malloc((l1 + l2 + 1) * sizeof(char));
	if (A == NULL)
		return(NULL);
	for (i = 0; i < l1; i++)
		A[i] = s1[i];
	for (i = 0; i < (l1 + l2); i++)
		A[i + l1] = s2[i];
	A[i] = '\0';
	return (A);
}
