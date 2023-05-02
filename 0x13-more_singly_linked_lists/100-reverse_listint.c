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
	tmph = tmph->next;
	(*head)->next = NULL;
	while (tmph != NULL)
	{
		tmp = tmph;
		tmph = tmph->next;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
