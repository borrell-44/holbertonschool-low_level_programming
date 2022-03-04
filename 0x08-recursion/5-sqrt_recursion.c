#include "main.h"

/**
 * root - entry point
 * @num: Variable to be evaluated
 * @n: Variable to be evaluated
 *
 * Return: Always 0
 */

int root(int n, int num)
{
	if (n < num || n == (num * num))
	{
		return (num);
	}

	return (root(n, num + 1));
}

/**
 * _sqrt_recursion - entry point
 * @n: Variable to be evaluated
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	int num = 1;

	if (n <= 0)
	{
		return (-1);
	}

	num = root(n, num);

	if (n < num)
	{
		return (-1);
	}
	else
		return (num);
}

