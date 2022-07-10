#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_numbers - a function that prints numbers separated by a separator
 * @separator: pointer to a character
 * @n: number of parameters variable
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%i", num);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
