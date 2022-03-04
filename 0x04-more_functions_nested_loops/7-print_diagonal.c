#include "main.h"

/**
* print_diagonal - Entry point
* @n: Variable to be evaluated
*
* Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
int num;
int times;
for (num = 0; num < n; num++)
{
for (times = 0; times < num; times++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n == 0 || n < 0)
_putchar('\n');
}
