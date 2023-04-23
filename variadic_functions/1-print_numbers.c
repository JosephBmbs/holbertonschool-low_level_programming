#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include"variadic_functions.h"

/**
 * print_numbers -a function that prints numbers
 * followed by a new line
 * @separator: separate between characters
 * @n: number of parametres
 * Return: //0 (nothing)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	int a;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(params, n);
	for (i = 0 ; i < n ; i++)
	{
		a = va_arg(params, int);
		if (separator == NULL)
		{
			printf("%d", a);
		}
		else if (i < n - 1)
		{
			printf("%d%s", a, separator);
		}
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");
	va_end(params);
}
