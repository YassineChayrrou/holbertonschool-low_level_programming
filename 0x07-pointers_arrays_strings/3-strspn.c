#include "holberton.h"
/**
  *_strspn - gets the length of a prefix substring
  *@s: string to compare length of prefix
  *@accept: substring to check in s
  *Return: n
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
			if (s[i] == accept[j])
			{
				n++;
			}
			if (accept[j] == '\0')
				return (n);
		i++;
	}
	return (n);
}
