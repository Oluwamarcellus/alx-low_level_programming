#include "lists.h"

/**
 *sum_dlistint - returns the sum of all the data (n) of a list
 *@head: linked list
 *Return: sum of data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL || !head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
