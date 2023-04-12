#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string
 *
 * Return: char value
 */

char *leet(char *s)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int k;
	int j;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; alphaArr[j] != '\0'; j++)
		{
			if (s[k] == alphaArr[j])
			{
				s[k] = alphaArr[j + 1];
				break;
			}
		}
	}
	return (s);
}
