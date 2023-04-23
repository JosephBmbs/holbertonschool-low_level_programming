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
	int i;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		*(array + i) = malloc(sizeof(int) * width);
		if (!(*(array + i)))
		{
			while (i >= 0)
			{
				free(*(array + i));
				--i;
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}
