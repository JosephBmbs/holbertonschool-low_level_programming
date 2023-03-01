#include "main.h"

/**     
* print_alphabet - prints the alphabet, in lowercase, followed by a new line
*
* Return: Always 0.
*/

void print_alphabet(void)
{
int i;
int u;
i = 1;
u = 97;
while (i < 27)
{
_putchar(u);
i++;
u++;
}
        _putchar('\n'); 
}
