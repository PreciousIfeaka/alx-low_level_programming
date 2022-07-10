#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings and embedded separators
 * @separator: a character for separating the strings
 * @n: number of parameters variable
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("nil");
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
