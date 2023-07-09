#include "hash_tables.h"

/**
 *hash_table_print - a function that prints a hash table
 *@ht: hash table to print
 *Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **ht_arr, *tmp = NULL;
	int t_size, i, printed = 0;

	if (!ht)
		return;

	t_size = ht->size;
	ht_arr = ht->array;
	printf("{");
	for (i = 0; i < t_size; i++)
	{
		tmp = ht_arr[i];
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			printed = 1;
			tmp = tmp->next;
			if (tmp)
				printf(", ");
		}
		if (i < (t_size - 1) && ht_arr[i + 1] && printed != 0)
			printf(", ");
	}
	printf("}\n");
}
