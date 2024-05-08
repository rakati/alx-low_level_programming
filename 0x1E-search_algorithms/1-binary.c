#include "search_algos.h"

/**
 * binary_search - search for a value in an array of integers using binary
 * search
 *
 * @array: one dimension array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: value position
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, h, i, mid;

	if (array == NULL)
		return (-1);
	l = 0;
	h = size - 1;
	while (l <= h)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= h; i++)
			printf(", %d", array[i]);
		printf("\n");
		mid = (h - l) / 2 + l;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			h = mid - 1;
	}
	return (-1);
}
