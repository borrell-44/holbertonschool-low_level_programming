#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n1;
int n2;
for (n1 = '0'; n1 < '9'; n1++)
{
for (n2 = '0'; n2 <= '9'; n2++)
{
if (n1 < n2)
{
if (n2 <= '9')
{
putchar(n1);
putchar(n2);
if (n1 != '8')
{
putchar(',');
putchar(' ');
}
}
}
}
if (n1 == '8')
putchar('\n');
}
return (0);
}
