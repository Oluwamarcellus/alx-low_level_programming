#include "search_algos.h"

/**
 *binary_search - function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *@array: List of elements to search
 *@size: Size of the list
 *@value: Value to search for in the list
 *Return: Index where the element is found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = size - 1, M;

	if (!array)
		return (-1);
	while (L <= R)
	{
		print_list_arr(array, L, R);
		M = (L + R) / 2;
		if (array[M] == value)
			return (M);
		if (array[M] > value)
			R = M - 1;
		else
			L = M + 1;
	}
	return (-1);
}

/**
 *print_list_arr - Prints list
 *@array: list to print
 *@L: starting point
 *@R: ending point
 *Return: void
 */

void print_list_arr(int *array, int L, int R)
{
	int i = 0;

	printf("Searching in array: ");
	while (L <= R)
	{
		if (i++ != 0)
			printf(", ");
		printf("%d", array[L++]);
	}
	printf("\n");
}
