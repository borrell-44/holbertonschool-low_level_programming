#include "main.h"
#include <stdlib.h>

/**
 * *array_range - entry point
 * @min: Variable to be evaluated
 * @max: Variable to be evaluated
 *
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int *ar, i, len;

	if (min > max)
		return (NULL);

	if (min < 0)
		len = (max + (-min)) + 1;
	else
		len = (max - min) + 1;

	ar = malloc(sizeof(int) * len);
	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ar[i] = min;
		min++;
	}

	return (ar);
}

