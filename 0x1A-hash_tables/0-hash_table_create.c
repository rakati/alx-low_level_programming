#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 *
 * @size: size of the array of hash table
 * Return: Always 0.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(hash_table_t));
	if (!arr)
		return (NULL);
	arr->array = malloc((sizeof(hash_node_t *) * (size)));
	if (!arr->array)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		arr->array[i] = NULL;
	arr->size = size;
	return (arr);
}
