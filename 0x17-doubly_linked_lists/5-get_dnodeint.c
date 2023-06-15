#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a list
 *@head: linked list
 *@index: index
 *Return: node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nnode = 0;

	while (head && head != NULL && nnode != index)
	{
		head = head->next;
		nnode++;
	}
	if (nnode == index)
		return (head);
	return (NULL);
}
