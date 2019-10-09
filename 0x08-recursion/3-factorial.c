#include "holberton.h"
/**
  *factorial - function that returns factorial of a given number
  *@n: number to perform factorial on
  *Return: factorial value
  */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
