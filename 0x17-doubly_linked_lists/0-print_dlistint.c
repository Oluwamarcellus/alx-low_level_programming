#include "lists.h"

/**
 *print_dlistint -  prints all the elements of a dlistint_t list
 *@h: linked list
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
