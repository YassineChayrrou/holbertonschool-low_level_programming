#include "holberton.h"
/**
  *_puts - prints a string followed by new line to standard output
  *@str: points to str
  *Return: 0
  */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
