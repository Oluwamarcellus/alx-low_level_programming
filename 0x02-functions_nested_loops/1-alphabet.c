#include "main.h"
/**
 *main - Entry point
 *Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *print_alphabet - Prints a - z in lowercase
 *Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
