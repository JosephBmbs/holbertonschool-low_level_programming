#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * clear_bit -change the value of a given bit index to 1
 * @n:pointer to long int
 * @index:index change postion
 * Return: 1if it worked or -1 if it failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
