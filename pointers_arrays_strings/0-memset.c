#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: array to set
 * @b: value to set it as
 * @n: amount of times
 * Return: s char value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
