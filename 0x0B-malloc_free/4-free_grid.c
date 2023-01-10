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

	for (1 = 0; 1 < height; 1++)
	{
		free(grid[1]);
	}
	return (grid);
}
