#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
* print_to_98 - a function that prints all natural numbers from n to 98
* @n: Number being evaluated
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			    printf("%i", n);
			    if (n != 98)
			    	printf(", ");
			    n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			    printf("%i", n);
			    if (n != 98)
			    	printf(", ");
			    n--;
		}
	}
}
