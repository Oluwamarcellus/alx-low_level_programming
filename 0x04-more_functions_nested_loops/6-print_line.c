#include "main.h"
/**
*print_line - prints line on screen
*@n: integer
*Return: void
*/

void print_line(int n)
{
	int j = 0;

	if (n > 0)
	{
		while (j < n)
		{
			_putchar('_');
			j++;
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
