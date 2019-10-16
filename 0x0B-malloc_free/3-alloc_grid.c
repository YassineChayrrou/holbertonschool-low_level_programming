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
	int **grid;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		grid[i][j] = 0;
	return (grid);
}
