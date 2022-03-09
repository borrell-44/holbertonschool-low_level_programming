#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: array of pointers to go through
 * @size: size of array
 * @cmp: pointer function to evaluate array
 *
 * Return: index of array that did not met condition
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

