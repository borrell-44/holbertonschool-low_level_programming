#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
* print_last_digit - Entry point
* @c: The character to be check
*
* Return: Always 0
*/

int print_last_digit(int c)
{
char a = (abs(c) % 10) + '0';
_putchar(a);
return (abs(c) % 10);
}
