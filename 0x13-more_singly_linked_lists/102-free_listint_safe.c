#include "lists.h"
/**
*free_listint_safe - frees a listint_t list
*@h: linked list pointer
*Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	unsigned int size = 0;
	listint_t *tmp = NULL;
	listint_t *head = NULL;

	if (h == NULL || *h == NULL)
		return (0);
	head = *h;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		size++;
		if ((void *)head < (void *)tmp)
			break;
	}
	*h = NULL;
	return (size);
}
