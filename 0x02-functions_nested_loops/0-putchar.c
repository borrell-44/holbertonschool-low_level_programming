#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char ch = '_';
_putchar(ch);
while (ch != 'r')
{
if (ch == '_')
ch += 17;
else if (ch == 'p')
ch += 5;
else if (ch == 'u')
ch -= 1;
else if (ch == 't')
ch -= 17;
else if (ch == 'c')
ch += 5;
else if (ch == 'h')
ch -= 7;
else if (ch == 'a')
ch += 17;

_putchar(ch);
if (ch == 'r')
_putchar('\n');
}
return (0);
}
