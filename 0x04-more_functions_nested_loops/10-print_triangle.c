#include "main.h"

/**
* print_triangle - Entry point
* @size: Variable to be evaluated
*
* Return: Always 0 (Success)
*/

void print_triangle(int size)
{
int num;
int ch;
int hold = size;
for (num = 1; num <= size; num++)
{
for (ch = 1; ch <= size; ch++)
{
if (ch < hold)
{
_putchar(' ');
}
else
_putchar('#');
}
hold--;
_putchar('\n');
}
if (size == 0 || size < 0)
_putchar('\n');
}
