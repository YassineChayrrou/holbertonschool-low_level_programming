#include "holberton.h"
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 strings with only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail or pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *empty;
	unsigned int i, k;

	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	for (i = 0; s1[i] != '\0'; i++)
		;
	ptr = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*ptr)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (k = 0; s2[k] != '\0' && k < n; k++, i++)
		ptr[i] = s2[k];
	ptr[i] = '\0';
	return (ptr);
}
