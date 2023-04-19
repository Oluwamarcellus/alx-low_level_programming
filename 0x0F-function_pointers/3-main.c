#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
*main - main function
*@argc: args count
*@argv: array of args
*Return: 0;
*/
int main(int argc, char *argv[])
{
	int n1, n2;
	char *fn;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	fn = argv[2];
	n2 = atoi(argv[3]);
	if (get_op_func(fn) == 0 || fn[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*fn == '/' && n2 == 0) ||
	(*fn == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(fn)(n1, n2));
	return (0);
}
