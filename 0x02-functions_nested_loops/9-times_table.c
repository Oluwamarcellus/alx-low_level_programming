#include "main.h"
/**
 * times_table - 9X9 mul table
 *Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)

	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			if (k > 9)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
