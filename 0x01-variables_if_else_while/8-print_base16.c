#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alp;
for (alp = '0'; alp <= 'f'; alp++)
{
putchar(alp);
if (alp == '9')
alp += 39;
if (alp == 'f')
putchar('\n');
}
return (0);
}
