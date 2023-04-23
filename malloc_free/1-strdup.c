#include<stdio.h>
#include <stdlib.h>
#include"main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 *  allocated space in memory
 * @str: duplicated string
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *res;
	int i, j;

	if (!str)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0'; i++)
		;
	res = malloc(sizeof(char) * i + 1);
	if (!res)
	{
		return (NULL);
	}
	for (j = 0 ; str[j] != '\0' ; j++)
	{
		res[j] = str[j];
	}
	res[i] = '\0';
	return (res);
}
