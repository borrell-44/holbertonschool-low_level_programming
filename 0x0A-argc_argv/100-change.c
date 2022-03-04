#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: Variable to be evaluated
 * @argv: Variable to be evaluated
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num, i;
	int count = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	while (num > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (num >= cents[i])
			{
				num -= cents[i];
				count++;
				i = 5;
			}
		}
	}

	printf("%d\n", count);
	return (0);
}

