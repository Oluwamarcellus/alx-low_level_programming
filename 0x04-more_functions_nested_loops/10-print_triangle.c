#include "main.h"

/**
*print_triangle - prints triangle
*@size: specifies the size of the triangle
*Return: void
*/

void print_triangle(int size)
{
	int i, j, n, m = size,  k = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < m; j++)
			{
				_putchar(' ');
			}
			k++;
			for (n = 0; n < k; n++)
			{
				_putchar('#');
			}
			m--;
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
