#include "hash_tables.h"

/**
 * hash_table_get - get value associated with a key
 * @ht: hash table
 * @key: a string represent key
 *
 * Return: string value associated with a key if found otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur;
	unsigned long int i;

	if (!ht || !key || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[i];
	while (cur != NULL)
	{
		if (strcmp(key, cur->key) == 0)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
