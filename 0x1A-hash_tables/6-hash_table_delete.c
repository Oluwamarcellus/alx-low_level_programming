#include "hash_tables.h"

/**
 *hash_table_delete -  a function that deletes a hash table
 *@ht: Hash table
 *Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp2;
	int i;

	if (!ht)
		return;
	for (i = 0; i < (int)ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			tmp2 = tmp;
			tmp = tmp->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
