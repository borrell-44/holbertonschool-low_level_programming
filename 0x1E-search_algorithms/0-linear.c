#include <stdio.h>

/**
* linear_search - Searches for a value in a list using Linear search
* @array: pointer to the first element of the array to search in
* @size: number of elements in the array
* @value: value to search for
*
* Return: index where value was faund or -1 if not
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if(array == NULL)
	{
		return (-1);
	}

	for(i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if(value == array[i])
		{
			return (i);
		}
	}

	return (-1);
}
