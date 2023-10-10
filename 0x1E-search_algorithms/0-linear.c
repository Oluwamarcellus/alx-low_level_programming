#include "search_algos.h"

/**
 *linear_search - function that searches for a value in an array
 *of integers using the Linear search algorithm
 *@array: list of elements to search
 *@size: Size/ length of the list
 *@value: Value to search fot in the list
 *Return: index where value is found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array || !*array)
		return (-1);
	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	} while (++i < (int)size);
	return (-1);
}
