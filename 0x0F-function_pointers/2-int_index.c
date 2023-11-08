#include "function_pointers.h"

/**
 * int_index - call another function to print name
 *
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp
 *         function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
