#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *Function that prints alphabet in lowercase followed by a new line.
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
