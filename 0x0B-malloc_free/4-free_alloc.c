#include "holberton.h"
#include <stdlib.h>
/**
  *free_grid - free 2D array
  *@grid: points to pointer
  *@height: takes an integer
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(A);
}
