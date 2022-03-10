#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum numbers
 * @n: type of argument
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	int num = n;
	va_list ap;

	va_start (ap, n);

	if (n != 0)
	{
		for (i = 0; i < num; i++)
		{
			sum += va_arg (ap, unsigned int);
		}
	}

	return (sum);
}

