#include "main.h"

/**
 * _calloc -  allocates memory for an array of int and initialized from min
 * to max values
 *
 * @min: integer
 * @max: integer
 * Return: pointer to allocated array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = min;

	if (max < min)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i <= max)
	{
		arr[i] = i;
		i++;
	}
	return (arr);
}
