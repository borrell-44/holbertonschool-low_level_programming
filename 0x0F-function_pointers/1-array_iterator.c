#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - entry point
 * @array: pointer array to go through
 * @size: size of the array
 * @action: pointer function to print
 *
 * Return: executed function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}

