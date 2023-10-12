#include "search_algos.h"
#include <math.h>

/**
 *jump_list - function that searches for a value in a sorted list of
 *integers using the Jump search algorithm.
 *@list: Linked list to traverse
 *@size: Size of the list
 *@value: What to search for in the list
 *Return: Index where the value is found or -1
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i = 0, x;
	listint_t *tmp;

	if (!list)
		return (NULL);

	while (i < size)
	{
		i = i + step;
		tmp = list;
		for (x = 0; x < step && list->next; x++)
			list = list->next;
		printf("Value checked at index [%lu] = [%d]\n",
				i >= size ? size - 1 : i, list->n);
		if (list->n >= value)
			break;
	}

	i = i - step;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, (i + step) >= size ? size - 1 : (i + step));

	while (i < (i + step) && i < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, tmp->n);
		if (tmp->n == value)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
