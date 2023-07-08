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
	unsigned long int idx, i;
	hash_node_t *new = NULL, *tmp = NULL;

	if (!key || *key == '\0' || !value || !ht)
		return (0);
	str = strdup(value);
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(str);
		return (0);
	}
	new->key = strdup(key);
	new->value = str;
	new->next = NULL;
	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = str;
			return (1);
		}
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
