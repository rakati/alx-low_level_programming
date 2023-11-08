#include "function_pointers.h"

/**
 * array_iterator - call another function to print name
 *
 * @array: array of integers
 * @size: size of the array
 * @action: function to apply on the array elements.
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
