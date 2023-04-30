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
	listint_t *new = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	while (i < (idx - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
