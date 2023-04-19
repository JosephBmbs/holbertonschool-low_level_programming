#include "main.h"
/**
 * _strlen -  function that returns the length of a string
 *
 * @s: character to getstring
 * Return: returns length
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{}
	return (x);
}
