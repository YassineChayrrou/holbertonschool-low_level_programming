#include <stdio.h>
/**
  *main - prints 50 first elements of fibonnaci sequence
  *
  *Return: 0
  */
int main(void)
{
	long int i, a = 1, b = 0;

	for (i = 0; i < 49; ++i)
	{
		a = a + b;
		b = a - b;
		printf("%ld, ", a);
	}
	printf("%ld\n", a + b);
	return (0);
}
