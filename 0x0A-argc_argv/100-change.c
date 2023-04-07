#include <stdlib.h>
#include <stdio.h>
/**
*check_coin - checks possible num of coin from num
*@num: number
*@coins: coin
*Return: void
*/
void check_coin(int *num, int *coins)
{
	if (*num >= 25)
	{
		*coins += (*num / 25);
		*num = *num % 25;
	} else if (*num >= 10)
	{
		*coins += (*num / 10);
		*num = *num % 10;
	} else if (*num >= 5)
	{
		*coins += (*num / 5);
		*num = *num % 5;
	} else if (*num >= 2)
	{
		*coins += (*num / 2);
		*num = *num % 2;
	} else if (*num >= 1)
	{
		*coins += (*num / 1);
		*num = *num % 1;
	}
}

/**
*main - prints the minimum number of...
*@argc: arguements count
*@argv: array of arguements string
*Return: 0
*/
int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (num <= 0)
	{
		printf("%d\n", 0);
	} else
	{
		while (num >= 1)
		{
			check_coin(&num, &coins);
		}
		printf("%d\n", coins);
	}
	return (0);
}
