#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: concat destination
 * @src:  concat source array
 * @n: amount of times to append
 *
 * Return: value of char
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (y = 0; dest[y] != '\0'; y++)
	{}

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[y + x] = src[x];
	}
	dest[y + x] = '\0';

	return (dest);

}
