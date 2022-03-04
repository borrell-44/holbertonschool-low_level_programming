#include "main.h"

/**
 * _pow_recursion - entry point
 * @x: Variable to be evaluated
 * @y: Variable to be evaluated
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

