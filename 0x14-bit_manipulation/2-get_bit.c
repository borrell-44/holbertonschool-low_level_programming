#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to look for value
 * @index: index where n is located
 * Return: value of n in index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_i = 0;

	while (n)
	{
		if (comp_i == index)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
		n /= 2;
		comp_i++;
	}
	if (index > comp_i && index < 63)
	{
		return (0);
	}
	return (-1);
}

