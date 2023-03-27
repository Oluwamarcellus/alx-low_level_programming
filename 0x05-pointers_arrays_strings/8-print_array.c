#include <stdio.h>

/**
*print_array - print n time of array of int
*@a: array
*@n: nth of time to print array
*Return: void
*/


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}

	}
	printf("\n");
}
