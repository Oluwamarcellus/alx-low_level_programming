#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: linked list
 *@idx: index to add node
 *@n: node data
 *Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL, *prev = NULL;
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL || !h)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	tmp = *h;
	while (tmp != NULL && index != idx)
	{
		prev = tmp;
		tmp = tmp->next;
		index++;
	}
	if (index == idx)
	{
		prev->next = new;
		new->prev = prev;
		new->next = tmp;
		return (new);
	}
	return (NULL);
}
