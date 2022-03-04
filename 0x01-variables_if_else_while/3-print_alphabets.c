#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char Lalp;
char Ualp;
for (Lalp = 'a'; Lalp <= 'z'; Lalp++)
{
putchar(Lalp);
if (Lalp == 'z')
{
for (Ualp = 'A'; Ualp <= 'Z'; Ualp++)
{
putchar(Ualp);
}
}
if (Lalp == 'z')
{
putchar('\n');
}
}
return (0);
}
