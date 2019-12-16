#include "holberton.h"
/**
  *_abs - computes absolute value of integer
  *@n: integer to use absolute value on
  *Return: int
  */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
