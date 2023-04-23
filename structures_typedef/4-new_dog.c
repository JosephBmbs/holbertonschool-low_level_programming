#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  a function that creates a new dog.
 * @name:  dog name
 * @age:   dog age
 * @owner: dog owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *d;
	int i;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (!d)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0 ; name[i] != '\0' ; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	for (i = 0 ; owner[i] != '\0' ; i++)
	{
	d->owner[i] = owner[i];
	}
	 d->owner[i] = '\0';
	d->age = age;
	return (d);
}
