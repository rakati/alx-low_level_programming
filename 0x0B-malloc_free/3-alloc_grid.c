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
	int *ptr;
	int len;

	if (width <= 0 || height <= 0)
		return (NULL);
	len = (height * sizeof(int *)) + ((height * width) * sizeof(int));
	arr = (int **)malloc(len);
	ptr = (int *)(arr + height);
	if (!arr)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = ptr + (i * width);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
