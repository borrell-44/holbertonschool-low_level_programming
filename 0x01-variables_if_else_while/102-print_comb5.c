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
int n4;
int hold;

for (n1 = '0'; n1 <= '9'; n1++)
{
for (n2 = '0'; n2 <= '9'; n2++)
{
hold = n2;
for (n3 = n1; n3 <= '9'; n3++)
{
if (n3 != n1)
hold = '0';
else
hold++;
for (n4 = hold; n4 <= '9'; n4++)
{
putchar(n1);
putchar(n2);
putchar(' ');
putchar(n3);
putchar(n4);
if (n1 != '9' || n2 != '8')
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
}
}
}
return (0);
}
