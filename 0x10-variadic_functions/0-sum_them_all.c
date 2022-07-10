#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums all its parameters
 * @n: the integer variables to be summed
 *
 * Return: sum of all the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return (sum);
}
