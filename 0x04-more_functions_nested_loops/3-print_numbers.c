#include "main.h"
/**
*print_numbers - prints number 0 through 9
*Return: void
*/

void print_numbers(void)
{
	int i = '0';

	while (i >= '0' && i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
