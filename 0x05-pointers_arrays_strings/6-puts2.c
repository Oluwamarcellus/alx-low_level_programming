#include "main.h"
/**
*puts2 - print even
*@str: char
*Return: void
*/
void puts2(char *str)
{
	int len = 0;
	int i, j;
	char *ch = str;

	while (*ch != '\0')
	{
		ch++;
		len++;
	}
	j = len - 1;
	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
