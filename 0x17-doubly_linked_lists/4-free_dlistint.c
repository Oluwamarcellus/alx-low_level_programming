#include "lists.h"

/**
 *free_dlistint - frees a dlistint_t list.
 *@head: linked list
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		tmp = NULL;
	}
}
