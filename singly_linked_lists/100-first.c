#include "lists.h"

void __attribute__((constructor)) before_main();
/**
 * _constructor - excutes befor main
 * befor_main - print out a specific message before
 * the main function is executed
 * Return: void
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
