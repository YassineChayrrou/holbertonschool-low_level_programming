#include "holberton.h"
/**
  *_puts_recursion - prints a string followed by a new line recursively
  *@s: string to print
  */
void _puts_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
