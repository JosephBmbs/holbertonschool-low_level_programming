#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:long int
 * @index:the index to return
 * Return: bite to find
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
	n = n >> index;
	return (1 & n);
	}
}
