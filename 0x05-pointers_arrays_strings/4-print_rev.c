#include "holberton.h"
/**
  *print_rev -  prints string in reverse
  *@s: points to s
  *Return: Always 0
  */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; *(s + i) >=  0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
