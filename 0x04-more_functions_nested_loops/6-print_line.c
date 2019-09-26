#include "holberton.h"
/**
  *print_line - draws a straight line in terminal
  *@n: number of times '_' is printed
  *Return: 0
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}

	}
	_putchar('\n');
}
