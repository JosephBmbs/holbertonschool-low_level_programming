#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @m:long int
 * @n:long int
 * Return:int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, b = 0;

	x = n ^ m;
	while (x > 0)
	{
			b += (x & 1);
			x = x >> 1;
	}
	return (b);
}
