#include "main.h"

/**
 * main - entry point
 * @argc: Variable to be evaluated
 * @argv: Variable to be evaluated
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *hold;
	int i = 0;

	hold = argv[i];

	while (i < argc)
	{
		while (*hold != '\0')
		{
			_putchar(*hold);
			hold++;
		}
		_putchar('\n');
		i++;
		hold = argv[i];
	}
	return (0);
}

