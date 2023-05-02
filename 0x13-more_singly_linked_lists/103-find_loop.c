#include "lists.h"
/**
*find_listint_loop -  finds the loop in a linked list
*@head: linked list
*Return: The address of the node where the loop starts
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head;
	listint_t *check = head;

	while (check != NULL && check->next != NULL)
	{
		current = current->next;
		check = check->next->next;
		if (current == check)
		{
			check = head;
			while (current != check)
			{
				current = current->next;
				check = check->next;
			}
			return (current);
		}
	}
	return (NULL);
}
