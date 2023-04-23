#include<stdio.h>
#include<stdlib.h>
#include "function_pointers.h"

/**
 * int_index - return the index of the element
 * @array: elements array
 * @size:  array size
 * @cmp:   function's pointer
 * Return:nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
