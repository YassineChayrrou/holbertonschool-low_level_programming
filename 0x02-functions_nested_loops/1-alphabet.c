#include "holberton.h"
/**
 * print_alphabet()
 *prints alphabets from a to z
 * Return: void
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
