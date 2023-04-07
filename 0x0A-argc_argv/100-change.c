#include <stdlib.h>
#include <stdio.h>
/**
*main - prints the minimum number of...
*@argc: arguements count
*@argv: array of arguements string
*Return: 0
*/
int main(int argc, char *argv[])
{
	int num;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	coins = 0;
	if (num <= 0)
	{
		printf("0\n");
	} else
	{
		while (num >= 01)
		{
			if (num >= 25)
				num -= 25;
			else if (num >= 10)
				num -= 10;
			else if (num >= 5)
				num -= 5;
			else if (num >= 2)
				num -= 2;
			else if (num >= 1)
				num -= 1;
			coins += 1;
		}
		printf("%d\n", coins);
	}
	return (0);
}
