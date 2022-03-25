#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from one number
 * to another
 * @n: number to flip with m
 * @m: number to flip with n
 * Return: number of bits needed to flip n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
		{
			count++;
		}
		mask >>= 1;
	}
	return (count);
}

