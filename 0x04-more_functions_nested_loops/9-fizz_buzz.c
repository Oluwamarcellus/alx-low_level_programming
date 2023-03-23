#include <stdio.h>
/**
*main - entry point
*Return: void
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s", "FizzBuzz");
			if (i < 100)
				printf(" ");
		} else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
			if (i < 100)
				printf(" ");
		} else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
			if (i < 100)
				printf(" ");
		} else
		{
			printf("%d", i);
			if (i < 100)
				printf(" ");
		}
	}
	printf("\n");
	return (0);
}
