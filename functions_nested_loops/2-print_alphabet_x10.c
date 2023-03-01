#include "main.h"

/**
* print_alphabet_x10 - function that prints 10 times the alphabet, 
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
int i;
int l;
int r;
r = 1;
while (r < 11)
{
i = 1;
l = 97;
while (i < 27)
{
_putchar(l);
i++;
l++;
}
r++;
_putchar('\n');
}
}
