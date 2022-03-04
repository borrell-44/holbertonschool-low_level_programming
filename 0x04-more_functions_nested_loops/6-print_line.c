#include "main.h"

/**
* print_line - Entry point
* @n: Variable to be evaluated
*
* Return: Always 0 (Success)
*/

void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
