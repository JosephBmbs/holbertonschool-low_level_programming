#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_s - print str
 * @params: va_list
 * Return: none
 */

void print_s(va_list params)
{
	char *s;

	s = va_arg(params, char *);
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_c - print char
 * @params: va_list
 * Return: none
 */

void print_c(va_list params)
{
	char c;

	c = va_arg(params, int);
	printf("%c", c);
}

/**
 * print_d -print int
 * @params: va_list
 * Return: none
 */

void print_d(va_list params)
{
	int d;

	d = va_arg(params, int);
	printf("%d", d);
}

/**
 * print_f - print float
 * @params: va_list
 * Return: none
 */
void print_f(va_list params)
{
	float f;

	f = va_arg(params, double);
	printf("%f", f);
}

/**
 * print_all - a function that prints anything
 * @format: string tha give us the types of the arguments
 * Return:none
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list params;
	print_t tpt[] = {
		{"s", print_s},
		{"c", print_c},
		{"i", print_d},
		{"f", print_f}
	};

	va_start(params, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(tpt[j].c)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", sep);
			tpt[j].print_func(params);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(params);
}
