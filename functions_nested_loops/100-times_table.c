#include "main.h"
/**
* print_times_table - display n-size times table, starting with 0
* @n: Size of times table
*/

void print_times_table(int n)
{
	int r, c;

	if (n < 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c  = 0; c <= n; c++)
			{
				if (c	== 0)
				{
					_putchar('0');
				}
				else if (r * c < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r * c + '0');
				}
				else if (r * c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((r * c) / 10 + '0');
					_putchar((r * c) % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((r * c) / 100 + '0');
					_putchar((r * c) % 100 / 10 + '0');
					_putchar((r * c) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
