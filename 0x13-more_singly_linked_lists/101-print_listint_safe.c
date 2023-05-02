#include "lists.h"
/**
*print_listint_safe - prints a listint_t linked list
*@head: linked list
*Return: int
*/
size_t print_listint_safe(const listint_t *head)
{
	unsigned int size = 0;

	if (head == NULL)
		return (98);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		size = size + 1;
		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (98);
		}
	}
	return (size);
}
