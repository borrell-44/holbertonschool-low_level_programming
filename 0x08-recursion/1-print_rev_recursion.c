#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _print_rev_recursion - entry point
 * @s: Variable to be evaluated
 *
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	int end;
	int len = strlen(s);

	if (len > 0)
	{
		if (!(isprint(*s)))
		{
			end = strlen(s);
			s += end;
		}

		s--;

		if (isprint(*s))
		{
			_putchar(*s);
			_print_rev_recursion(s);
		}
		else
			_putchar('\n');
	}
}

