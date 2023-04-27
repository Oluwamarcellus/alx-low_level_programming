#include "lists.h"
#include <string.h>
/**
*add_node_end - adds a new node at the end of a list
*@head: linked list
*@str: string
*Return: new linked list address
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dup = NULL;
	list_t *new = NULL;

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		if ((*head)->str == NULL)
		{
			free(*head);
			return (NULL);
		}
		(*head)->len = _strlen(str);
		(*head)->next = NULL;
		return (*head);
	}
	dup = *head;
	while (dup->next != NULL)
		dup = dup->next;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = NULL;
	dup->next = new;
	return (new);
}

/**
*_strlen - returns string length
*@str: string
*Return: length
*/

unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		continue;
	return (i);
}
