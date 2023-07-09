#include "hash_tables.h"

/**
 *hash_table_get - a function that retrieves a value associated with a key
 *@ht: hash table
 *@key: the key of the value to retrieve if present
 *Return: The key's value or NULL if not present
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int k;
	hash_node_t *tmp;

	if (!ht || !key || !*key)
		return (NULL);

	k = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[k]; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
