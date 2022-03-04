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
	int num = 0;
	int i = 1;
	int count;
	char *hold;

	hold = argv[i];

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		hold = argv[i];

		for (count = 0; hold[count] != '\0'; count++)
		{
			if (!(isdigit(hold[count])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(argv[i]);
		i++;
		hold = argv[i];
	}

	printf("%d\n", num);

	return (0);
}

