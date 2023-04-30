#include "lists.h"
/**
*insert_nodeint_at_index - inserts a new node at a given position
*@head: linked list
*@idx: index to place new list
*@n: new list data
*Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *tmp = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < (idx - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
