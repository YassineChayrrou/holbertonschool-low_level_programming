#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int integerType;
	long int longType;
	long long int longlongType;
	float floatType;

	printf("Size of a char: %i byte(s)\n", sizeof(charType));
	printf("Size of an int: %i byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %i byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %i byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %i bytes\n", sizeof(floatType));
	return (0);
}
