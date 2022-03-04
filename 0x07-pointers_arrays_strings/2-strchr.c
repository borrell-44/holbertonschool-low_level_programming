#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * *_strchr - check the code
 * @s: Variable to be evaluated
 * @c: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	for (; ; s++)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		if (*s == '\0')
		{
			return (NULL);
		}
	}
}

