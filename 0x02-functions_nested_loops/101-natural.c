#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int i;
	int j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j = j + i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
