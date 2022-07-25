#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function
 * @grid: 1st parm
 * @height: 2nd parm
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
