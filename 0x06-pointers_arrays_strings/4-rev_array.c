#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * reverse_array - check the code
 * @a: Variable to be evaluated
 * @n: Variable to be evaluated
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int num;
	int *hold;
	int last = (n - 1);

	hold = (int *)malloc(n * sizeof(int));

	for (num = 0; num < n; num++)
	{
		hold[num] = a[num];
	}

	for (num = 0; num < n; num++)
	{
		a[num] = hold[last];
		last--;
	}
}

