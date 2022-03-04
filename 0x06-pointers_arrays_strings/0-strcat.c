#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *_strcat - check the code
 * @dest: Variable to be evaluated
 * @src: Variable to be evaluated
 * @dest: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int num = 0;
	int count;
	int s_len = (strlen(src) - 1);

	while (dest[num] != '\0')
	{
		num++;
		if (dest[num] == '\0')
		{
			for (count = 0; count <= s_len; count++)
			{
				dest[num] = src[count];
				num++;
				if (count == s_len)
				{
					dest[num] = '\0';
				}
			}
			return (dest);
		}
	}
	return (dest);
}

