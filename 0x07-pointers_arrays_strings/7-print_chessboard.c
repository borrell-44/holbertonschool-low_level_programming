#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_chessboard - check the code
 * @a: Variable to be evaluated
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int row, column;
	int len_col = sizeof(a[0]) / sizeof(a[0][0]);
	int len_row = sizeof(*a);

	for (row = 0; row < len_row; row++)
	{
		for (column = 0; column < len_col; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}

