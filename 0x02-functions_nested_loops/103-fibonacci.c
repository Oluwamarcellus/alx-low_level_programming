#include <stdio.h>
/**
 *main - entry point
 *Return: Always 0
 */
int main(void)
{
	int j = 1;
	int k = 2;
	int sum = k;

	while ((k + j) < 4000000)
	{
		k = k + j;
		if (k % 2 == 0)
			sum = sum + k;
		j = k - j;
	}
	printf("%d\n", sum);
	return (0);
}
