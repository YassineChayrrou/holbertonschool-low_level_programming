#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i;
	char w[] = "Holberton";

	for (i = 0; i < 10; i++)
	_putchar(w[i]);
	_putchar('\n');
	return (0);
}
