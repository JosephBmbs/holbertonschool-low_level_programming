#include <stdio.h>

/**
 * main - prints numbers from 0 to 99.
 * Return: 0
 */

int main(void)
{
int f = 0;

while (f <= 99)
{
putchar(f / 10 + '0');
putchar(f % 10 + '0');
if (f != 99)
{
putchar(',');
putchar(' ');
}
f++;
}
putchar('\n');
return (0);
}
