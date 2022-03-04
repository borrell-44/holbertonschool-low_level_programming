#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * _strcmp - check the code
 * @s1: Variable to be evaluated
 * @s2: Variable to be evaluated
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int num;
	int len1 = strlen(s1) - 1;
	int len2 = strlen(s2) - 1;
	int limit = len1;

	if (limit < len2)
		limit = len2;


	for (int num = 0; num <= limit; num++)
	{
		if (s1[num] != s2[num])
		{
			result = s1[num] - s2[num];
		}
	}

	return (result);
}

