#include "lists.h"
/**
*list_len - returns the number of elements in a linked list
*@h: linked list
*Return: linked list size
*/
size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
