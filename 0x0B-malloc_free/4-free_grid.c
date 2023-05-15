#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array of integers.
 * @grid: the 2 dimensional array to be freed
 * @height: the height of @grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);

	free(grid);
}
