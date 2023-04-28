#include "lists.h"
/**
*free_listint2 - frees a listint_t list
*@head: linked list
*Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (*head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		tmp = NULL;
	}
	free(*head);
	*head = NULL;
}
