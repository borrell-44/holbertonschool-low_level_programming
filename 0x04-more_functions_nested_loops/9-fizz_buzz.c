#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function
 * @c: Variable to be evaluated
 *
 * Return: Always 0 (Succes)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
(write(1, "FizzBuzz", 8));
else if (num % 3 == 0)
(write(1, "Fizz", 4));
else if (num % 5 == 0)
(write(1, "Buzz", 4));
else
{
if (num > 10)
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
if (num != 100)
_putchar(' ');
}
_putchar('\n');
return (0);
}
