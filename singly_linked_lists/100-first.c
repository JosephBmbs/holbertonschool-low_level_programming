#include "lists.h"

void __attribute__((constructor)) before_main();
/**
 * _constructor - excutes befor main
 * 
 * Return: void
 */

void _constructor(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
