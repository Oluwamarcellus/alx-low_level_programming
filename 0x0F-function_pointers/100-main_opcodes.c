#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*@argc: args count
*@argv: array of args
*Return: 0
*/
int main(int argc, char *argv[])
{
	int byte;
	char *cl;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	cl = (char *)main;
	while (i < byte)
	{
		if (i == (byte - 1))
		{
			printf("%02hhx\n", cl[i]);
			break;
		}
		printf("%02hhx ", cl[i]);
		i++;
	}
	return (0);
}
