#include "holberton.h"
#include <stdlib.h>
/**
  *alloc_grid - allocate memory for 2D array of integers
  *@width: takes int
  *@height: takes int
  *Return: A or NULL
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **A;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	A = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		A[i] = malloc(height * sizeof(int));
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			A[i][j] = 0;
	return (A);
}
