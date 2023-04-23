#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name to print
 * @f: fanction to use
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f != NULL)
f(name);
}