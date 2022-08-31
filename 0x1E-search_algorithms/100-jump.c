#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* jump_search - Searches for a value in a list using Jump search
* @array: pointer to the first element of the array to search in
* @size: number of elements in the array
* @value: value to search for
*
* Return: index where value was faund or -1 if not
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, step = sqrt(size);

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
		{
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
	for (j = i - step; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (value == array[j])
		{
			return (j);
		}
	}
	return (-1);
}
