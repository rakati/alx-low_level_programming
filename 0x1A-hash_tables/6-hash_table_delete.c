#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 *
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur, *tmp;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		while (cur != NULL)
		{
			tmp = cur;
			cur = cur->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
