#include "hash_tables.h"

/**
 *hash_table_set - a function that adds an element to the hash table
 *@ht: Hash table
 *@key: key of the value to add
 *@value: Value to add
 *Return: 1 if successful or 0 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *str;
	int idx;
	hash_node_t *new = NULL;

	if (!key || !*key || !ht)
		return (0);

	str = malloc(sizeof(strlen(value) + 1));
	if (!str)
		return (0);
	strcpy(str, value);

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(str);
		return (0);
	}
	new->key = (char *)key;
	new->value = str;
	new->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
		return (1);
	}

	ht->array[idx] = new;
	return (1);
}
