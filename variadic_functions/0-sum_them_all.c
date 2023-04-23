#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: parametrs number
 * Return:sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	int a, sum = 0;

	va_start(params, n);
	for (i = 0 ; i < n ; i++)
	{
		a = va_arg(params, int);
		sum += a;
	}
	return (sum);

	va_end(params);
}
