#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * *_strpbrk - check the code
 * @s: Variable to be evaluated
 * @accept: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, num;
	int len_s = strlen(s);
	int len_acc = strlen(accept);

	for (i = 0; i < len_s; i++)
	{
		for (num = 0; num < len_acc; num++)
		{
			if (s[i] == accept[num])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}

