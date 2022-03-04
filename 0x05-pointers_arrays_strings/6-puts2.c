#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - check the code
* @str: Variable to be evaluated
*
* Return: Always 0.
*/

void puts2(char *str)
{
int num;
int len = strlen(str);
for (num = 0; num < len; num += 2)
{
printf("%c", str[num]);
}
printf("\n");
}

