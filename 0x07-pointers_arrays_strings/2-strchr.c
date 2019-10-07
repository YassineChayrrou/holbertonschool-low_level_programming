#include "holberton.h"
/**
  *_strchr - locates a character in a string
  *@s: points to string
  *@c: character to locate
  *Return: s
  */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	} while (*s++);
	return (0);
}
