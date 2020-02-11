#include <stdio.h>
/**
 *main - prints sum of even number in fibonacci sequence under 4M
 *
 *Return: 0
 */
int main(void)
{
	long int i, a = 1, b = 0, sum = 0;

	for (i = 0; a <= 4000000; ++i)
	{
		a = a + b;
		b = a - b;
		if (a % 2 == 0)
			sum += a;
	}
	printf("%ld\n", sum);
	return (0);
}



