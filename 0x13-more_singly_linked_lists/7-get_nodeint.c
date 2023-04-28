#include "lists.h"
/**
*get_nodeint_at_index - returns the nth node
*@head: linked list
*@index: index to print
*Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while ((i < index) && (tmp != NULL))
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
