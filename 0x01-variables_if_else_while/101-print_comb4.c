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
int n3;
for (n1 = '0'; n1 < '9'; n1++)
{
for (n2 = '0'; n2 <= '9'; n2++)
{
for (n3 = '0'; n3 <= '9'; n3++)
{
if (n1 < n2 && n2 < n3)
{
putchar(n1);
putchar(n2);
putchar(n3);
if (n1 != '7')
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
