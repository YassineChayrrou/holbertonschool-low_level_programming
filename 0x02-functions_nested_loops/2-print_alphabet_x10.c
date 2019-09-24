#include "holberton.h"
/**
 * print_alphabet_x10 - entry point
 * print alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int repeat=0;
	char ch;

	while (repeat < 10)
	{
		for (ch = 'a' ;ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		repeat++;
		_putchar('\n');
	}
}
