#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers
 * @width:  integer
 * @height: integer
 * Return: NULL or grid on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
