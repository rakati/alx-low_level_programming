#include "main.h"

/**
 * _strdup - return a copy of an array of char
 * @str: array to copy
 *
 * Return: pointer to a copy of an array of char
 */
char *_strdup(char *str)
{
	char *arr;
	int size = 0, i;

	while (str[size])
		size++;
	arr = malloc((size + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	arr[size] = '\0';
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	return (arr);
}
