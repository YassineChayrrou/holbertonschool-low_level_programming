#include "holberton.h"
/**
  *_isupper - function that checks for uppercase charachters
  *@c : charachter to check
  *Return: 1
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
