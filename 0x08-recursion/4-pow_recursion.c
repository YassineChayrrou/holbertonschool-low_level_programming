#include "holberton.h"
/**
  *_pow_recursion - gives the value of x raised to the power of y
  *@x: base number
  *@y: raised to the power number
  *Return: x to the power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
