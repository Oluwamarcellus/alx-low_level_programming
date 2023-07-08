#include "hash_tables.h"

/**
 *hash_table_create - a function that creates a hash table.
 *@size: size of the hash map
 *Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *head = NULL;

	if (!size || size <= 0)
		return (NULL);
	head = malloc(sizeof(hash_table_t));
	if (!head)
		return (NULL);
	head->size = size;
	head->array = malloc(sizeof(hash_node_t) * size);
	if (!head->array)
	{
		free(head);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		head->array[i] = NULL;

	return (head);
}
