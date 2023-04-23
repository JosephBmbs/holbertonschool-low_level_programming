#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: Elements number
 * @size: Elements size
 * Return: Allocaterd memory's pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = malloc(nmemb * size);

	if (!alloc)
		return (NULL);
	for (i = 0 ; i < size * nmemb ; i++)
	{
		alloc[i] = '\0';
	}
	return (alloc);
}
