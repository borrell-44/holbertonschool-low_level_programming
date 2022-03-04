#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strlen - entry point
 * @string: Variable to be evaluated
 *
 * Return: Always 0
 */

int _strlen(char *string)
{
	int num;

	if (string == NULL)
		return (0);

	for (num = 0; string[num] != '\0'; num++)
	{}

	return (num);
}

/**
 * *string_nconcat - entry point
 * @s1: Variable to be evaluated
 * @s2: Variable to be evaluated
 * @n: Variable to be evaluated
 *
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	int len_s1 = _strlen(s1);
	int len_s2 = _strlen(s2);
	int i, j;
	int num = n;


	if (len_s2 > num)
		len_s2 = num;

	buffer = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		buffer[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		buffer[i] = s2[j];
		i++;
	}
	buffer[i] = '\0';

	return (buffer);
}

