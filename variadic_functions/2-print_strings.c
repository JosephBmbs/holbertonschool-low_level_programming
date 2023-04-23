#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>
#include"variadic_functions.h"

/**
 * print_str - a function that prints strings
 * followed by a new line
 * @s: string to be printed
 * Return: none
 */

void print_str(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		printf("%c", s[i]);
	}
}

/**
 * print_strings - a function that prints strings
 * followed by a new line
 * @separator: separator between the strings
 * @n: number of strings passed in the param
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	char *a;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(params, n);
	for (i = 0 ; i < n ; i++)
	{
		a = va_arg(params, char *);
		if (a != NULL)
		{
			if (separator == NULL)
			{
				print_str(a);
			}
			else if (i < n - 1)
			{
				print_str(a);
				printf("%s", separator);
			}
			else
			{
				print_str(a);
			}
		}
		else if (i < n - 1)
			printf("(nil)%s", separator);
		else
			printf("(nil)");
	}

	printf("\n");
	va_end(params);
}
