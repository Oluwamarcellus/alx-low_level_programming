#include "lists.h"
#include <string.h>
/**
*add_node - adds a new node at the beginning of a list
*@head: linked list
*@str: string
*Return: linked list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

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
	new->next = *head;
	*head = new;
	return (new);
}

/**
*_strlen - find the length of strign
*@str: string
*Return: lenght
*/

unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
