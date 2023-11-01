#include "main.h"

/**
 * alloc_grid - concatenate two string
 * @width: width of the 2d array
 * @height: height of the 2d array
 *
 * Return: pointer to 2d string
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc((height) * sizeof(int *));
	if (!arr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc((width) * sizeof(int));
		if (!arr[i])
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
