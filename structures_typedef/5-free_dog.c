#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d:     dog to be freed
 * Return: //0 (nothing)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
