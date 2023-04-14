#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid.
 * @grid: Pointer to the memory block to be freed.
 * @height: Height of the grid (number of rows).
 * Return: void.
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
