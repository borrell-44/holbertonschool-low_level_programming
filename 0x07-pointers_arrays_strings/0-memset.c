#include "main.h"

/**
 * *_memset - check the code
 * @s: Variable to be evaluated
 * @b: Variable to be evaluated
 * @n: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;
	char *ptr;

	ptr = s;

	for (num = 0; num < n; num++)
	{
		ptr[num] = b;
	}
	return (s);
}

