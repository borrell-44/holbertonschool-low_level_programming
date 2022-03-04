#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - entry point
 * @ac: Variable to be evaluated
 * @av: Variable to be evaluated
 *
 * Return: pointer of all arguments concatenated
 */

char *argstostr(int ac, char **av)
{
	char *buffer;
	int i, j;
	int num = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += sizeof(av[i]) - 1;


	buffer = malloc(sizeof(char) * size - 3);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			buffer[num] = av[i][j];
			num++;
		}
		buffer[num] = '\n';
		num++;
	}
	buffer[num] = '\0';

	return (buffer);
}

