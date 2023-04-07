#include <stdlib.h>
#include <stdio.h>
/**
*main - multiplies two numbers
*@argc: arguements count
*@argv: array of arguements string
*Return: 0
*/

int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	} else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
