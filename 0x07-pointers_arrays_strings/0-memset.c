#include "holberton.h"
/**
  *_memset - function that fills block of memory with a constant byte
  *@s: points to address of memory to change its value
  *@b: value we want to set
  *@n: amount of value we want to set
  *Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
		*s++ = b;
	return (s);
}
