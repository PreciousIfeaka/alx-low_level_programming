#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * based on instructions in other fxns
 * @f: a function pointer with void return type
 * @name: a pointer to name.
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name && *f)
		f(name);
}
