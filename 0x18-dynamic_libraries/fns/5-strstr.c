#include "holberton.h"
/**
  *_strstr - locates a substring
  *@haystack: string
  *@needle: occurance string to locate
  *Return:or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;
	do {
		while (haystack[i] == needle[j])
		{
			j++;
		}
		return (needle);
	} while (i++);
	return (0);
}
