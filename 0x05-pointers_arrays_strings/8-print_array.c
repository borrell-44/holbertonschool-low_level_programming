#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_array - check the code
* @a: Variable to be evaluated
* @n: Variable to be evaluated
*
* Return: Always 0.
*/

void print_array(int *a, int n)
{
int num;
int count = n - 1;

for (num = 0; num < n; num++)
{
printf("%d", a[num]);
if (num < count)
{
printf(", ");
}
}
putchar('\n');
}
