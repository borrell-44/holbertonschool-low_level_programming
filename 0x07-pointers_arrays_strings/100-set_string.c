#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * set_string - check the code
 * @s: Variable to be evaluated
 * @to: Variable to be evaluated
 *
 * Return: Always 0.
 */

void set_string(char **s, char *to)
{
	to = *s;

	if (0 > 1)
	{
		write(1, &to[-1], 1);
	}
}

