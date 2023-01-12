#include "main.h"
#include <stdlib.h>

/**
 * free_grid  - allocates a grid maka space and free space
 * @grid: takes width of grid
 * @height: free space
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
