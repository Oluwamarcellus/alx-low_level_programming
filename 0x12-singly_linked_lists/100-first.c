#include <stdio.h>
/**
*_first - executes code before main
*Return: void
*/
void __attribute__((constructor)) _first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
