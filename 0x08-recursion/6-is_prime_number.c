#include "main.h"

/**
 * is_prime_number - entry point
 * @n: Variable to be evaluated
 *
 * Return: Always 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
	{
		return (1);
	}

	return (0);
}

