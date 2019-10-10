#include "holberton.h"
/**
  * is_prime_number - returns a prime number
  * @n:integer
  * Return: Result
  */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (prime_finder(2, n));
}
/**
  *prime_finder - find prime number
  * @i: integer variable
  * @n: integer variable
  * Return: increment i and compare to n
  */
int prime_finder(int i, int n)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (prime_finder(i + 1, n));
}
