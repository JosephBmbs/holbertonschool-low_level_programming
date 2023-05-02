#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint -convert a binary number to unsigned int
 * @b:string
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return 0;

	int len = strlen(b);
	unsigned int result = 0;

	for (int i = 0; i < len; i++)
	{
		if (b[i] == '0')
			result = (result << 1) + 0;
		else if (b[i] == '1')
			result = (result << 1) + 1;
		else
			return (0);
	}

	return (result);
}
