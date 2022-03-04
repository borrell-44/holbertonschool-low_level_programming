#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * *rot13 - check the code
 * @a: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *rot13(char *a)
{
	int i;
	int len = strlen(a) - 1;

	for (i = 0; i <= len; i++)
	{
		if (isalpha(a[i]))
		{
			a[i] -= 13;
			while (!(isalpha(a[i])))
			{
				a[i] += 26;
			}
		}
	}
	return (a);
}

