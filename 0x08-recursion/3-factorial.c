#include "main.h"

/**
 * factorial - a fumction that returns the factorial of a number.
 * @n: pointer to string variable
 * Return: -1 if unsuccessful and factorial if successful.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
