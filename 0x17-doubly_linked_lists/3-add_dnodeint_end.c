#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a list
 *@head: linked list
 *@n: node data
 *Return: new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
