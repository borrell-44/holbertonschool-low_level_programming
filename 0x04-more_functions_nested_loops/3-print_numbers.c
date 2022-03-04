#include "main.h"
#include <ctype.h>

/**
* print_numbers - Entry point
*
* Return: Always 0 (Success)
*/

void print_numbers(void)
{
char num;
for (num = '0'; num <= '9'; num++)
{
_putchar(num);
}
_putchar('\n');
}
