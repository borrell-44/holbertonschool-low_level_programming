#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* rev_string - check the code
* @s: Variable to be evaluated
*
* Return: Always 0.
*/

void rev_string(char *s)
{
int num;
int len = strlen(s) - 1;
char *hold;
int n = 0;

hold = (char *)malloc(len * sizeof(char));

for (num = len; num >= 0; num--)
{
*(hold + n) = s[num];
n++;
}
for (num = 0; num <= len; num++)
{
s[num] = *(hold + num);
}
}
