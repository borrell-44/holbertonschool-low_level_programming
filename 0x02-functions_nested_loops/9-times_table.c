#include "main.h"

/**
* times_table - Entry point
*
* Return: Always 0 (Success)
*/

void times_table(void)
{
int num;
int mult;
int result;
char sp;
for (num = 0; num <= 9; num++)
{
sp = ' ';
for (mult = 0; mult <= 9; mult++)
{
result = num * mult;
if (result >= 10)
sp = (result / 10) + '0';
if (mult != 0)
_putchar(sp);
_putchar((result % 10) + '0');
if (mult != 9)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
}
