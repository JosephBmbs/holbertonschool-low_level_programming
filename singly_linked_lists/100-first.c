#include "lists.h"

void __attribute__((constructor)) before_main();
/**
 * _constructor - excutes befor main
 * _hare - Prints a string before the
 * the main function is executed
 * Return: void
 */

void __attribute__((constructor)) hare(void);

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
