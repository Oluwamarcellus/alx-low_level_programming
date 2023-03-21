#include "main.h"
/**
 *print_last_digit - function to print last digit of a num
 *@a: an integer
 *Return: last digit of a
 */
int print_last_digit(int a)
{
	int j = a % 10;

	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
