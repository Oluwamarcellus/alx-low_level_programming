#include "lists.h"
/**
*free_listint - frees a listint_t list
*@head: linked list
*Return: void
*/
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
		head = NULL;
	}
}
