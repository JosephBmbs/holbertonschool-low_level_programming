
#include "main.h"
#include "2-strlen.c"
/**
 * puts2 -  a function that prints every other character
 * of a string, starting with the first character
 *
 * @str: string to put twice
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
