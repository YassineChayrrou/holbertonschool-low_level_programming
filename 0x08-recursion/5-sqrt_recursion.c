#include "holberton.h"
/**
  *_sqrt_recursion - returns natural square root of integer
  *@n: integer
  *Return: result
  */
int _sqrt_recursion(int n)
{
	return (finder(1, n));
}
/**
  *finder - find a natural square root
  *@m: integer
  *@p: integer too
  *Return: m after comparing it to p
  */
int finder(int m, int p)
{
	if (m * m == p)
		return (m);
	else if (m * m > p)
		return (-1);
	else
		return (finder(m = m + 1, p));
}
