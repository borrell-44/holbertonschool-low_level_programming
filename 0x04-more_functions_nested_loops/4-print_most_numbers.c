#include "main.h"
#include <ctype.h>

/**
* print_most_numbers - Entry point
*
* Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
char num;
for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')
_putchar(num);
}
_putchar('\n');
}
