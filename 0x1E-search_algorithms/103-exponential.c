#include "search_algos.h"
#include <stddef.h>

/**
 *exponential_search - function that searches for a value in a sorted
 *array of integers using the Exponential search algorithm
 *@array: List to traverse
 *@size: Size of the list to traverse
 *value: Value to search for in the list
 *Return: The index where the value is found or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 1;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);

	while (idx < size)
	{
		if (array[idx] > value)
			break;
		printf("Value checked array[%lu] = [%d]\n",
				idx, array[idx]);
		idx *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			idx / 2,
			idx >= size ? (size - 1) : idx);
	return (exponent_binary_search(array,
				idx / 2,
				idx >= size ? (size - 1) : idx,
				value));
}

#include "search_algos.h"

/**
 *binary_search - function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *@array: List of elements to search
 *@size: Size of the list
 *@value: Value to search for in the list
 *Return: Index where the element is found or -1
 */

int exponent_binary_search(int *array, size_t L, size_t R, int value)
{
	int M;

	while (L <= R)
	{
		print_list(array, L, R);
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
