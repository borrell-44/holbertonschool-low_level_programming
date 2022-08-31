#include <stdio.h>

/**
* binary_search - Searches for a value in a list using Binary search
* @array: pointer to the first element of the array to search in
* @size: number of elements in the array
* @value: value to search for
*
* Return: index where value was faund or -1 if not
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, start = 0, end = size - 1;

    if (array == NULL)
    {
        return (-1);
    }

    while(start <= end)
    {
        printf("Searching in array:");
        for(i = start; i <= end; i++)
        {
            printf(" %d", array[i]);
            if(i != end)
            {
                printf(",");
            }
        }
        printf("\n");

        mid = start + (end - start) / 2;
        if(array[mid] == value)
        {
            return (mid);
        }
        if(array[mid] < value)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
	return (-1);
}
