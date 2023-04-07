#include <stdio.h>
#include <stdlib.h>
/**
*main - adds positive numbers
*@argc: arguements count
*@argv: array of arguements string
*Return: 0
*/

int main(int argc, char *argv[])
{
	if ((argc - 1) == 0)
	{
		printf("%d\n", 0);
	} else
	{
		int i, j, sum = 0;

		for (i = 1; i < argc; i++)
		{
			j = 0;

			while (argv[i][j] != '\0')
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("%s\n", "Error");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
