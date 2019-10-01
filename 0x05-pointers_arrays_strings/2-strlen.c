#include "holberton.h"
/**
  *_strlen - returns the length of string
  *@s: points to char
  */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return(i);
}
