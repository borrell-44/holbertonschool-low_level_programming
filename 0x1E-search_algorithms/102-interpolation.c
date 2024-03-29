#include <stdio.h>
#include <stdlib.h>

/**
* interpolation_search - Searches a list using Interpolation search
* @array: pointer to the first element of the array to search in
* @size: number of elements in the array
* @value: value to search for
*
* Return: index where value was faund or -1 if not
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos;

	if (array == NULL)
	{
		return (-1);
	}

	pos = low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low]));

	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	do {
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		pos++;
	} while (pos < size);

	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
