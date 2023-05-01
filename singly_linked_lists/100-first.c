#include <stdio.h>

/**
 * _constructor - excutes befor main
 * 
 * Return: void
 */

void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void)
{
printf("This is the main function.\n");
return 0;
}
