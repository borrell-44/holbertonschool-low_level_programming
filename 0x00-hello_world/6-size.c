#include <stdio.h>


/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int intType;
float floatType;
long int longType;
long long int LongLongType;
char charType;

char q[12] = "Size of a";
printf("%s char: %zu byte(s)\n", q, sizeof(charType));
printf("%sn int: %zu byte(s)\n", q, sizeof(intType));
printf("%s long int: %zu byte(s)\n", q, sizeof(longType));
printf("%s long long int: %zu byte(s)\n", q, sizeof(LongLongType));
printf("%s float: %zu byte(s)\n", q, sizeof(floatType));
return (0);
}
