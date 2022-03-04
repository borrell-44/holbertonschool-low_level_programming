#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
char alp;
int count;
for (count = 0; count < 10; count++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
