#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: string value
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] - s2[x] == 0 && s1[x] != '\0')
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
