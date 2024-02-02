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

	arr = malloc(sizeof(hash_table_t));
	arr->array = malloc((sizeof(hash_node_t *) * size));
	arr->size = size;
	return (arr);
}
