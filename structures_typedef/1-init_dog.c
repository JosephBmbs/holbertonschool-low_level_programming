#include"dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * init_dog -  a function that initialize a variable
 * of type struct dog
 * @d:      initialized dog
 * @name:   dog name
 * @age:    dog age
 * @owner:  dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
