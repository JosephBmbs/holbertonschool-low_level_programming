#include "main.h"

/**
* print_triangle - function that prints a triangle, followed by a new line
*
* @size: size of triangle
*/

void print_triangle(int size)
{
	
int i;
int x;
int y;

if (size <= 0)
{
_putchar('\n');
}
else
{

for (i = 1; i <= size; i++)
{
for (x = size - i ; x > 0; x--)
{
_putchar(' ');
}
for (y = 0; y < i; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
