#include "holberton.h"
/**
  *_memset - function that fills block of memory with a constant byte
  *@s: pfunction that fills memory with a constant byte in coints to address of memory to change its value
  *@b: value we want to set
  *@n: amount of value we want to set
  *Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
