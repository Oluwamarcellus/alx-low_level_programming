#include "lists.h"
/**
*sum_listint - returns the sum of all the data (n) of linked list
*@head: linked list
*Return: sum of the data
*/
int sum_listint(listint_t *head)
{
	int i;

	if (head == NULL)
		return (0);
	i = head->n;
	return (i + sum_listint(head->next));
}
