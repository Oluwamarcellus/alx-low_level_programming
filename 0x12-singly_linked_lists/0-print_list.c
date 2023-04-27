#include "lists.h"
/**
*print_list - prints all the elements of a list_t list
*@h: linked list
*Return: linked list print size
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
