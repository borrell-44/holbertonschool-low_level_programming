#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - check the code
 * @str: Variable to be evaluated
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int num;
	int len = strlen(str);
	int sum = (strlen(str) - 1) / 2;

	if (len == 0)
	{
		printf("\n");
		return;
	}
	if (sum % 2 == 0)
		sum++;

	for (num = sum; num < len; num++)
	{
		printf("%c", str[num]);
	}
	printf("\n");
}
