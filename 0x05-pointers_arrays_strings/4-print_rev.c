#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - check the code
* @s: Variable to be evaluated
*
* Return: Always 0.
*/

void print_rev(char *s)
{
int num;
int len = strlen(s) - 1;
for (num = len; num >= 0; num--)
printf("%c", s[num]);
printf("\n");
}
