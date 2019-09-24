#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	int i;
	char w[] = "Holberton";

	for (i = 0; i < 10; i++)
	_putchar(w[i]);
	_putchar('\n');
	return (0);
}
