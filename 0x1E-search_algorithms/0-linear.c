#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array || !*array)
		return (-1);
	do
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	} while (i++ < size);
	return (-1);
}
