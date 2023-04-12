#include "main.h"

/**
 * string_toupper -  a function that changes all lowercase
 * letters of a string to uppercase
 *
 * @s: character to make upper
 * Return: return value of upper
 *
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;

	return (s);
}
