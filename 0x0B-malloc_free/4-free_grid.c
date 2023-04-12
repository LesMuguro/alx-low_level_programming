#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees the memory a
 * 2D grid created by task 3's
 * alloc_grid function
 *
 * @grid: 2D grid
 * @height: the height of the grid
 *
 * Return: no return value because void
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
