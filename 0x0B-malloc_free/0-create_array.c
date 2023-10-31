#include "main.h"

/**
 * create_array - allocate memory for an array and initialized with char
 * @size: size of array to allocate
 * @c: character to initialize array with
 *
 * Return: pointer to allocated array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
