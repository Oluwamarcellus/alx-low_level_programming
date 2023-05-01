#include "lists.h"

/**
*delete_nodeint_at_index - deletes the node at index index of a listint_t
*@head: linked list
*@index: index to delete
*Return: int
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL;
	listint_t *tmp2 = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	tmp2 = tmp->next;
	if (tmp2 == NULL)
		return (-1);
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
