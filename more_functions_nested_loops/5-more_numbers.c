#include "main.h"

/**
* more_numbers - unction that prints 10 times the numbers, from 0 to 14
*
* Return: Always (0)
*/ 

void more_numbers(void)
{
int r;
int num;
for (r = 0; r <= 9; r++)
{
	for (num = 0; num <= 14; num++)
	{
			if (num > 9)
				{
					_putchar(num / 10 + '0');
				}
		
		_putchar ((num % 10) + '0');
		
	}
	
	_putchar('\n');
	
}
}
