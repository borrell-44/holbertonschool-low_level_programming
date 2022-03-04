#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * *_strstr - check the code
 * @haystack: Variable to be evaluated
 * @needle: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, count, num;
	int len_hay = strlen(haystack);
	int len_nee = strlen(needle) - 1;

	if (len_hay < 0 || len_nee < 0)
		return (NULL);

	for (i = 0; i < len_hay; i++)
	{
		count = i;
		if (haystack[i] == needle[0])
		{
			for (num = 0; num <= len_nee; num++)
			{
				if (haystack[count] != needle[num])
				{
					num += len_nee;
				}

				if (num == len_nee)
				{
					return (haystack + i);
				}

				if (count < len_hay)
					count++;
			}
		}
	}
	return (NULL);
}

