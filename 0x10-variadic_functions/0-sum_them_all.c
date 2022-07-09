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
	unsigned int i = n;
	int sum = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);
	while (n)
	{
		sum = sum + i;
		i = va_arg(ap, const unsigned int);
	}
	va_end(ap);

	return (sum);
}
