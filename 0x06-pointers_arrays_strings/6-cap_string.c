#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * *cap_string - check the code
 * @a: Variable to be evaluated
 *
 * Return: Always 0.
 */

char *cap_string(char *a)
{
	int i;
	int num;
	char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n'};
	int len_a = strlen(a) - 1;
	int len_s = strlen(s) - 1;
	char last = a[0];

	for (i = 0; i <= len_a; i++)
	{
		if (i == 0 && islower(last))
		{
			a[i] -= 32;
		}
		for (num = 0; num <= len_s; num++)
		{
			if ((last == s[num] || isspace(last)) && islower(a[i]))
			{
				a[i] -= 32;
			}
		}
		last = a[i];
	}
	return (a);
}

