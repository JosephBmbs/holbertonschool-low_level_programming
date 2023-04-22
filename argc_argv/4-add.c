#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: arguments number
 * @argv:  array of argumments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int j, i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
