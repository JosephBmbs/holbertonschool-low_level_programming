#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * set_bit -change the value of a given bit index to 1
 * @n:pointer to long int
 * @index: index change position
 * Return: 1if it worked or -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = (1 << index) | *n;
	return (1);
}
