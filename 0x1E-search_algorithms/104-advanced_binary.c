#include "search_algos.h"

/**
 *advanced_binary - function that searches for a value in a sorted array
 *of integers using binary search algorithm
 *@array: List to search
 *@size: Size of the list
 *@value: Value to search for
 *Return: Return value of adv_binary_search
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t L, R;

	if (!array)
		return (-1);

	L = 0;
	R = size - 1;
	return (adv_binary_search(array, L, R, value));
}

/**
 *adv_binary_search - function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *@array: List of elements to search
 *@L: Lowest index of the list
 *@R: Highest index of the list
 *@value: Value to search for in the list
 *Return: Index where the element is found or -1
 */

int adv_binary_search(int *array, size_t L, size_t R, int value)
{
	int M = (L + R) / 2;

	print_list(array, L, R);

	if (array[M] == value)
	{
		R = M;
		while (L < R)
		{
			print_list(array, L, R);
			M = (L + R) / 2;
			if (array[M] < value)
				L = M + 1;
			else
				R = M;
		}
		return (M);
	}

	if (L >= R)
		return (-1);

	if (array[M] < value)
		L = M + 1;
	if (array[M] > value)
		R = M - 1;
	return (adv_binary_search(array, L, R, value));
}

/**
 *print_list - Prints list
 *@array: list to print
 *@L: starting point
 *@R: ending point
 *Return: void
 */

void print_list(int *array, int L, int R)
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
