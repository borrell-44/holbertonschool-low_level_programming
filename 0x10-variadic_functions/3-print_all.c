#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print the argument given
 * @format: list of types of arguments
 *
 * Return: arguments printed
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	void *ptr;
	va_list ap;

	va_start(ap, format);

	ptr = va_arg(ap, void *);

	while (ptr != NULL)
	{
		while ("%"format[i] != *ptr)
		{
		}

		ptr = va_arg(ap, void *);
	}

	printf("\n");
	va_end(ap);
}

