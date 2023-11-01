#include "main.h"

/**
 * free_grid - free a 2d array
 * @grid: 2d array
 * @height: height of the 2d array
 *
 */
void free_grid(int **grid, int height)
{
	if (height > 0)
		free(grid);
}
