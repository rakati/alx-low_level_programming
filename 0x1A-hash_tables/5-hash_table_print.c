#include "hash_tables.h"

/**
 * hash_table_print - print elements of a hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	unsigned long int i;
	char m = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		while (cur != NULL)
		{
			if (m == 1)
				printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			m = 1;
			cur = cur->next;
		}
	}
	printf("}\n");
}
