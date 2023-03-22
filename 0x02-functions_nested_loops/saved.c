#include "main.h"
/**
 *print_times_table - 9X9 mul table
 *@n: integer
 *Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;
	int m = n + 1;
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (k > 99)
				{
					_putchar((k / 10) / 10 + '0');
					_putchar((k / 10) % 10 + '0');
					_putchar(k % 10 + '0');
				} else if (k > 9)
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				} else
				{
					_putchar(k % 10 + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					if (k < m)
						_putchar(' ');
				}
			}
			_putchar('\n');
			m = m - 1;
		}
	}
}
