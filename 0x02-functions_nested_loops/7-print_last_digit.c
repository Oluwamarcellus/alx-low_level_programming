#include "main.h"
/**
 *print_last_digit - function to print last digit of a num
 *@a: an integer
 *Return: last digit of a
 */
int print_last_digit(int a)
{
	a = (a % 10);
	_putchar(a);
	return (a);
}
