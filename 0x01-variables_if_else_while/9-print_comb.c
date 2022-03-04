#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int alp;
for (alp = '0'; alp <= '9'; alp++)
{
putchar(alp);
if (alp < '9')
{
putchar(',');
putchar(' ');
}
if (alp == '9')
putchar('\n');
}
return (0);
}
