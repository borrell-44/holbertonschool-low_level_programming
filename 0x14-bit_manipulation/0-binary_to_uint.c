#include "main.h"
#include <stdio.h>

/**
* _pow - power of 2
* @times: number of times is elevated
*
* Return: result
*/

int _pow(int times)
{
	int i;
	int sum = 1;

	for (i = 0; i < times; i++)
	{
		sum *= 2;
	}

	return (sum);
}

/**
* _strlen - gets the lenght of a string
* @string: the string from where the lenght must be found
*
* Return: lenght of string
*/

int _strlen(const char *string)
{
	int size = 0;

	for (; string[size] != '\0'; size++)
	{}

	return (size);
}

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string that represents the binary number
*
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	int times = 0;

	if (b == NULL)
	{
		return (0);
	}

	i = _strlen(b) - 1;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '1')
		{
			num += _pow(times);
		}
		i--;
		times++;
	}

	return (num);
}

