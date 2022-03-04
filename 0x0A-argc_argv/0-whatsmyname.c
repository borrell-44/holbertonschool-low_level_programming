#include "main.h"

/**
 * main - entry point
 * @argc: Variable to be evaluated
 * @argv: Variable to be evaluated
 *
 * Return: Always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	char *name;

	name = argv[0];

	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');

	return (0);
}

