#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * *_strncpy - check the code
 * @dest: Variable to be evaluated
 * @src: Variable to be evaluated
 * @dest: Variable to be evaluated
 * @n: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];
	for ( ; count < n; count++)
		dest[count] = '\0';

	return (dest);
}

