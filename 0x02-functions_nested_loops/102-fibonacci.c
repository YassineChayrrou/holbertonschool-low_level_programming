#include <stdio.h>
/**
  *main - prints 50 first elements of fibonnaci sequence
  *
  *Return: 0
  */
int main(void)
{
	long int i, a = 1, b = 0;

	for (i = 0; i < 50; ++i)
	{
		if (i < 49)
		{
			a = a + b;
			b = a - b;
			printf("%ld, ", a);
		}
		else
			printf("%ld\n", a);
	}
	return (0);
}
