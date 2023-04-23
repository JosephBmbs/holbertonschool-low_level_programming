#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - aply a function on all the array elements
 * @array: integers array
 * @size:  array size
 * @action:the functon pointer
 * Return:nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i;

	if (!array || !action || !size)
		return;
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
