#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add numbers
 * @a: Variable to evaluate
 * @b: Variable to evaluate
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub numbers
 * @a: Variable to evaluate
 * @b: Variable to evaluate
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul numbers
 * @a: Variable to evaluate
 * @b: Variable to evaluate
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div numbers
 * @a: Variable to evaluate
 * @b: Variable to evaluate
 *
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod numbers
 * @a: Variable to evaluate
 * @b: Variable to evaluate
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

