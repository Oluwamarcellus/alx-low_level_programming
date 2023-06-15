#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a list
 *@h: linked list
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
