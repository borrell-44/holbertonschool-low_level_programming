#include <ctype.h>
#include "main.h"

/**
 * _isupper - Entry point
 * @c: NUmber to be evaluated
 *
 * Return: Always 0 (Success)
*/

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
return (0);
}
