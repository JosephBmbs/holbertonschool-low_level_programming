#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase.
*
*
* Return: 0
**/

int main(void)
{
char NUM, XX;

for (NUM = '0'; NUM <= '9'; NUM++)
putchar(NUM);
for (XX = 'a'; XX <= 'f'; XX++)
putchar(XX);
putchar('\n');

return (0);
}
