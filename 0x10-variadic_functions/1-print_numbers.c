#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers given
 * @seperator: string between numbers
 * @n: holds how many numbers were passed
 *
 * Return: numbers printed
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	int num = n - 1;
	int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i <= num; i++)
	{
		printf("%d", va_arg(ap, const unsigned int));
		if (seperator != NULL && i != num)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(ap);
}

