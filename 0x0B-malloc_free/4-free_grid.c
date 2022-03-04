#include "main.h"
#include <stdlib.h>

/**
 * free_grid - entry point
 * @grid: Variable to be evaluated
 * @height: Variable to be evaluated
 *
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid != NULL)
			free(grid[i]);
	}

	free(grid);
}

