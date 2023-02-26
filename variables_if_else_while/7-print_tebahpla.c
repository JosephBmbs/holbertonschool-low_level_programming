#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse, followed by a new line.
*
*
* Return: 0
**/

int main(void)
{
char NUM;

for (NUM = 'z'; NUM >= 'a'; NUM--)
putchar(NUM);
putchar('\n');

return (0);
}
