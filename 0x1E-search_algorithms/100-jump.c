#include "search_algos.h"
#include <math.h>

/**
 *jump_search - Function that searches for a value in a sorted array
 *of integers using the Jump search algorithm
 *@array: List of numbers to search
 *@size: Size of the list
 *@value: Value to search for in the list
 *Return: Index where the number is found or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int step, i = 0, j, k;
	int idx = -1;

	if (!array)
		return (-1);

	step = sqrt(size);
	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i + step;
		if (i < (int)size && array[i] >= value)
		{
			k = i;
			break;
		}
		else if (i >= (int)size)
		{
			k = size - 1;
			break;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", i - step, i);
	j = i - step;
	for (j = j; j <= k; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			idx = j;
			break;
		}
	}
	return (idx);
}
