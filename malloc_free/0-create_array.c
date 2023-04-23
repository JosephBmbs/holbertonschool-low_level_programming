#include<stdio.h>
#include<stdlib.h>

/**
 * create_array -  a function that creates an array of chars
 * and initializes it with a specific char
 * @size: array size
 * @c:    array content
 * Return: null or array full of c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}
