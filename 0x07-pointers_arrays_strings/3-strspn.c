#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strspn - check the code
 * @s: Variable to be evaluated
 * @accept: Variable to be evaluated
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	int len_acc = strlen(accept) - 1;
	int len_s = strlen(s) - 1;
	int i, num, min, len_h;
	int count = len_acc;
	char *hold;

	hold = (char *) malloc(len_acc);

	for (i = 0; i <= len_acc; i++)
	{
		hold[i] = accept[i];
	}

	for (i = 0; i <= len_s; i++)
	{
		for (num = 0; num <= len_acc; num++)
		{
			if (s[i] == accept[num] && count > 0)
			{
				len++;
				len_h = (strlen(hold) - 1);
				for (min = 0; min < len_h; min++)
				{
					if (hold[min] == accept[num])
					{
						count--;
						hold[min] = '~';
						min += len_acc;
					}
				}
			}
		}
	}
	return (len);
}

