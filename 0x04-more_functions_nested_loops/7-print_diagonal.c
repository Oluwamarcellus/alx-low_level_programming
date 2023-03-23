#include "main.h"
/**
*print_diagonal - prints symbol in diagonal
*@n: integer
*Return: void
*/

void print_diagonal(int n)
{
	int j = 0;
	int k;

	if (n > 0)
	{
		while (j < n)
		{
			k = 0;
			_putchar(92);
			_putchar('\n');
			while ((j < (n - 1)) && k <= j)
			{
				_putchar(' ');
				k++;
			}
			j++;
		}
	} else
	{
		_putchar('\n');
	}
}
