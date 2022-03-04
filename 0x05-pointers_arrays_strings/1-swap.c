#include "main.h"

/**
* swap_int - check the code
* @a: Variable to be evaluated
* @b: Variable to be evaluated
*
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
int hold = *a;
*a = *b;
*b = hold;
}
