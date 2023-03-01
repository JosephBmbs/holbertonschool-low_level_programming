#include "main.h"

/**
* print_sign - it's a function that checks for lowercase character
* @n: a is a number
* Return: On success 1.
* On error: -1 is returned and error is set appropriately.
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
