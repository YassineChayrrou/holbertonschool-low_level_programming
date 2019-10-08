#include "holberton.h"
/**
  *_strpbrk - function that searches a string for any of a sety of bytes
  *@s: string to search
  *@accept:string to be searched for
  *Return: s + i or NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
