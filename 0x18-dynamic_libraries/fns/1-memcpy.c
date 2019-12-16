#include "holberton.h"
/**
  *_memcpy - fuction that copies memory area
  *@dest: block of memory to copy to
  *@src: area or block of memory to copy from
  *@n: value of bytes to copy
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	return (dest);
}
