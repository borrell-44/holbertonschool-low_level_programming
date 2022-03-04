#include "main.h"

/**
* jack_bauer - Entry point
*
* Return: Always 0 (Success)
*/

void jack_bauer(void)
{
int num0;
int num1;
int num2;
int num3;
int hold = '9';
for (num0 = '0'; num0 <= '2'; num0++)
{
if (num0 == '2')
hold = '3';
for (num1 = '0'; num1 <= hold; num1++)
{
for (num2 = '0'; num2 <= '5'; num2++)
{
for (num3 = '0'; num3 <= '9'; num3++)
{
_putchar(num0);
_putchar(num1);
_putchar(':');
_putchar(num2);
_putchar(num3);
_putchar('\n');
}
}
}
}
}
