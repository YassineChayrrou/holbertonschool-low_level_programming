#include <stdio.h>
/**
 * main - prints numbers from 1 to 100 and replace multiple of 3 with fizz
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", num);
	}
	printf("Buzz\n");
	return (0);
}
