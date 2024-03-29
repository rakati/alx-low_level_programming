#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: a string represent key
 * @value: a string represent value to be added
 *
 * Return: 1 if succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *cur, *new;
	unsigned long int i;

	if (!ht || !key || *key == '\0')
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[i];
	while (cur != NULL)
	{
		if (strcmp(key, cur->key) == 0)
		{
			free(cur->value);
			cur->value = strdup(value);
			if (!cur->value)
				return (0);
			return (1);
		}
		cur = cur->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);
	if (!new->value || !new->key)
	{
		free(new->value);
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
