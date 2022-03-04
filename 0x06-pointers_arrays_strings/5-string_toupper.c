#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * *string_toupper - check the code
 * @a: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *string_toupper(char *a)
{
	int num;
	int len = strlen(a) - 1;

	for (num = 0; num <= len; num++)
	{
		if (isalpha(a[num]) && islower(a[num]))
		{
			a[num] -= 32;
		}
	}
	return (a);
}

