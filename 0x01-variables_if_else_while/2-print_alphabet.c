#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
putchar(alp);
if (alp == 'z')
{
putchar('\n');
}
}
return (0);
}
