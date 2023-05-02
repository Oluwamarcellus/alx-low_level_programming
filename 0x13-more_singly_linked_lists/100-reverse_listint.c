#include "lists.h"

/**
*reverse_listint - reverses a listint_t linked list
*@head: linked list
*Return: a pointer to the first node of the reversed list
*
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmph;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	tmph = *head;
	*head = (*head)->next;
	tmph->next = NULL;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = tmph;
		tmph = tmp;
	}
	return (tmph);
}
