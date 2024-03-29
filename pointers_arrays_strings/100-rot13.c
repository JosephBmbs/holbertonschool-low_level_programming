#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 *
 * @s: String being evaluated
 *
 * Return: Rotated by Rot13
 */

char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rAlphbet[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (alphabet[j] == s[i])
			{
				s[i] = rAlphbet[j];
				break;
			}
		}
	}
	return (s);
}
