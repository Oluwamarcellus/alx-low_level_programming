#include "lists.h"
/**
*free_list - frees a list_t list
*@head: linked list
*Return: void
*/
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		temp->str = NULL;
		head = temp->next;
		free(temp);
		temp = NULL;
	}
}
