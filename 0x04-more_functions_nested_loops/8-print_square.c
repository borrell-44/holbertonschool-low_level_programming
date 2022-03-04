#include "main.h"

/**
* print_square - Entry point
* @size: Variable to be evaluated
*
* Return: Always 0 (Success)
*/

void print_square(int size)
{
int num;
int times;
for (num = 0; num < size; num++)
{
for (times = 0; times < size; times++)
{
_putchar('#');
}
_putchar('\n');
}
if (size == 0 || size < 0)
_putchar('\n');
}
