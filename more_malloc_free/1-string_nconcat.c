#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: 1st str
 * @s2: 2nd str
 * @n: Nummber oof char to concat with s1
 * Return: res or null if the allocation failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, j, k;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	res = malloc(sizeof(char) * (i + n + 1));
	if (!res)
		return (NULL);
	for (j = 0 ; s1[j] != '\0' ; j++)
	{
		res[j] = s1[j];
	}
	for (k = 0 ; s2[k] != '\0' && k < n ; k++)
	{
		res[j++] = s2[k];
	}
	res[j] = '\0';
	return (res);
}
