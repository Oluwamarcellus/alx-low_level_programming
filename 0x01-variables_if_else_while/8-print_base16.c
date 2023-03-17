#include <stdio.h>
/**
 *main - entry point
 *Return: return 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 102; a++)
	{
		if ((a >= 48 && a <= 57) || (a >= 97 && a <= 102))
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
