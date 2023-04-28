#include "lists.h"
/**
*print_listint - prints all the elements of a listint_t list
*@h: linked list
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	static unsigned int i = 1;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	return(i + print_listint(h->next));
}
