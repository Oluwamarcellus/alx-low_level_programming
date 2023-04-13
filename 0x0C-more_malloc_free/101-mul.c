#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*len_of_str - get the length of string
*@str: string
*Return: lenght of string passed
*/

int len_of_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	return (i);
}

/**
*digit_checker - checks for digit in a string
*@str: string
*Return: 1 or 0
*/
int digit_checker(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
*on_error - Displays error
*Return: void
*/
void on_error(void)
{
	printf("Error\n");
	exit(98);
}
/**
*main - Enter point
*@argc: argument count
*@argv: array of arguments
*Return: 0;
*/
int main(int argc, char *argv[])
{
	int len1, len2, glen, d1, d2, i, n, m = 0, *mem;
	char *str1 = argv[1], *str2 = argv[2];

	if (argc != 3 || !digit_checker(str1) || !digit_checker(str2))
		on_error();
	len1 = len_of_str(str1);
	len2 = len_of_str(str2);
	glen = len1 + len2 + 1;
	mem = malloc(sizeof(int) * glen);
	if (mem == NULL)
		return (1);
	for (i = 0; i <= (glen - 1); i++)
		mem[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = str1[len1] - '0';
		n = 0;
		for (len2 = len_of_str(str2) - 1; len2 >= 0; len2--)
		{
			d2 = str2[len2] - '0';
			n = n + mem[len1 + len2 + 1] + (d1 + d2);
			mem[len1 + len2 + 1] = n % 10;
			n = n / 10;
		}
		if (n > 0)
			mem[len1 + len2 + 1] += n;
	}
	for (i = 0; i < glen - 1; i++)
	{
		if (mem[i] != 0)
			m = 1;
		if (m != 0)
			_putchar(mem[i] + '0');
	}
	if (m == 0)
		_putchar('0');
	_putchar('\n');
	free(mem);
	return (0);
}
