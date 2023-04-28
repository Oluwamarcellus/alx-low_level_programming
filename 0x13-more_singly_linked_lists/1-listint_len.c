#include "lists.h"
/**
*listint_len - returns the number of elements in a linked list
*@h: linked list
*Return: unsigned int
*/
size_t listint_len(const listint_t *h)
{
	unsigned int i = 1;

	if (h == NULL)
		return (0);
	return (i + listint_len(h->next));
}
