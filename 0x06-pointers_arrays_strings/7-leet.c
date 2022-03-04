#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * *leet - check the code
 * @a: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *leet(char *a)
{
	int i;
	int num;
	char code[] = {'o', 'l', '@', 'e', 'a', '@', '@', 't'};
	int len_c = strlen(code) - 1;
	int len_a = strlen(a) - 1;

	for (i = 0; i <= len_a; i++)
	{
		for (num = 0; num <= len_c; num++)
		{
			if (a[i] == code[num] || ((a[i] + 32) == code[num] && isalpha(a[i])))
			{
				a[i] = num + '0';
			}
		}
	}

	return (a);
}

