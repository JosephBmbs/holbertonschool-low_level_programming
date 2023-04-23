#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"

/**
 * op_add - two integers sum
 * @a: int
 * @b: int
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between a and b
 * @a: int
 * @b: int
 * Return: ≠≠≠
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: int
 * @b: int
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the devision of a by b
 * @a: int
 * @b: int
 * Return: a div b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the devision of a by b
 * @a:int
 * @b:int
 * Return:a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
