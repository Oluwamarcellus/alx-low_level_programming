#include "lists.h"

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
