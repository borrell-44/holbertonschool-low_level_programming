#include "main.h"
#include <ctype.h>

/**
* _isdigit - Entry point
* @c: NUmber to be evaluated
*
* Return: Always 0 (Success)
*/

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
return (0);
}
