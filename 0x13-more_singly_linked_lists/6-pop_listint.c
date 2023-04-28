#include "lists.h"
/**
*pop_listint - deletes the head node of a listint_t
*@head: linked list
*Return: popped data
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int i;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp;
	tmp = NULL
	return (n);
}
