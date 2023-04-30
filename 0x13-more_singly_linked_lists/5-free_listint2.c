#include "lists.h"
/**
*free_listint2 - frees a listint_t list
*@head: linked list
*Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *tmp2 = NULL;

	if (*head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		free(tmp2);
	}
	*head = NULL;
}
