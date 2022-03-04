#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * *_strncat - check the code
 * @dest: Variable to be evaluated
 * @src: Variable to be evaluated
 * @dest: Variable to be evaluated
 * @n: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int num = 0;
	int count;
	int len_d = strlen(dest);
	int limit = n;

	if (n > len_d)
		limit = len_d;

	while (dest[num] != '\0')
	{
		num++;
		if (dest[num] == '\0')
		{
			for (count = 0; count < limit; count++)
			{
				dest[num] = src[count];
				num++;
			}
			dest[num] = '\0';
			return (dest);
		}
	}
	return (dest);
}

