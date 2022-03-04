#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - entry point
 * @width: Variable to be evaluated
 * @height: Variable to be evaluated
 *
 * Return: Always 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **buffer;

	if (width <= 0 || height <= 0)
		return (NULL);

	buffer = malloc(height * sizeof(int *));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(width * sizeof(int));
		if (buffer[i] == NULL)
		{
			for (; i >= 0; i--)
				free(buffer[i]);

			free(buffer);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			buffer[i][j] = 0;
		}
	}

	return (buffer);
}

