#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexnum;
	char hexchar;

	for (hexnum = 0; hexnum < 10; hexnum++)
		putchar(hexnum + '0');
	for (hexchar = 'a'; hexchar <= 'f'; hexchar++)
		putchar(hexchar);
	putchar('\n');
	return (0);
}
