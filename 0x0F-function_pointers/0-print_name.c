#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: Name to print
 * @f: Pointer for printing name
 *
 * Return: Function result
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

