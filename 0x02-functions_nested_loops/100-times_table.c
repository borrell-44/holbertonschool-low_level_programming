#include "main.h"

/**
* print_times_table - Entry point
* @n: Variable to be evaluated
*
* Return: Always 0 (Success)
*/

void print_times_table(int n)
{
  int num;
  int mult;
  int result;
  char sp;
  for (num = 0; num <= n; num++)
    {
      sp = ' ';
      for (mult = 0; mult <= n; mult++)
        {
          result = num * mult;
          if (result >= 10)
            sp = (result / 10) + '0';
          if (mult != 0)
          _putchar(sp);
          _putchar((result % 10) + '0');
          if (mult != 9)
            {
          _putchar(',');
          _putchar(' ');
            }
          else
            _putchar('\n');
        }
    }
}

