#include "main.h"
/**
*print_most_numbers - prints number 0 through 9 except 2 and 4
*Return: void
*/

void print_most_numbers(void)
{
	int i = '0';

	while (i >= '0' && i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
