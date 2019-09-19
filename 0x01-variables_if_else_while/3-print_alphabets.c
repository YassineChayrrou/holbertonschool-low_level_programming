#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch, chup;

	for (ch = 'a'; ch <= 'z'; ++ch)
	putchar(ch);
	for (chup = 'A'; chup <= 'Z'; ++chup)
	putchar(chup);
	putchar('\n');
	return (0);
}
