#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a new line
*
*
* Return: 0
**/

int main(void)
{
char NUM;

for (NUM = 'a'; NUM <= 'z'; NUM++)
putchar(NUM);
putchar('\n');

return (0);        
    
}
