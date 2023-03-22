#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */

int main(void)
{
	unsigned int i = 1;
	unsigned int j = 2;
	unsigned int k;
	int c = 3;

	printf("%d, ", i);
	printf("%d, ", j);
	while (c <= 98)
	{
		k = i;
		i = j;
		j = j + k;
		printf("%d, ", j);
		c++;
	}

	return (0);
}
