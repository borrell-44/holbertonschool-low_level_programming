#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @a: Variable to be evaluated
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int front = 0;
	int back = 0;
	int x, y;
	int size_type = sizeof(int);
	int len_y = sizeof(a[0]) / sizeof(a[0][0]);
	int len_x = sizeof(*a);

	for (x = 0; x < len_x; x++)
	{
		for (y = 0; y < len_y; y++)
		{
			if (x == y)
			{
				front += a[x][y];
			}
		}
	}

	for (x = (len_x - 1); x >= 0; x--)
	{
		for (y = (len_y - 1); y >= 0; y--)
		{
			if (x == y)
			{
				back += a[x][y];
			}
		}
	}

	printf("%d, %d", front, back);
}
 
