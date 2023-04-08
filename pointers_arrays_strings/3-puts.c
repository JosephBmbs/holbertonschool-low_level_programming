#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 *
 * @str: declaration of *str and paramters for the function _puts
 */
void _putchar();
void _puts(char *str)
{
	int x;

	for (x = 0; *(str + x) != '\0'; x++)
	{
		_putchar(*(str + x));
	}
	_putchar('\n');
}
