#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @seperator: what will be between each string
 * @n: number of strings
 *
 * Return: strings printed
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	int i;
	char *st = "(nil)";
	int num = n - 1;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i <= num; i++)
	{
		st = va_arg(ap, char *);

		if (st != NULL)
			printf("%s", st);
		else
			printf("(nil)");

		if (seperator != NULL && i != num)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(ap);
}

