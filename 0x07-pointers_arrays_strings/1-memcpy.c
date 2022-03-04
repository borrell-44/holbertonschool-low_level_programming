#include "main.h"
#include <string.h>

/**
 * *_memcpy - check the code
 * @dest: Variable to be evaluated
 * @src: Variable to be evaluated
 * @n: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s, *d;
	unsigned int i;

	s = src;
	d = dest;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (dest);
}

