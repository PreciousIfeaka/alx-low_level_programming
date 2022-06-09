#include "main.h"

/**
 * _isdigit - checks if an input character is a digit.
 * @c: input character
 * Return: 1 if input is a digit and 0 if otherwise.
 */

int _isdigit(int c)
{
	int digit = c;
	int vals;

	if (digit >= 48 && digit <= 57)
		vals = 1;
	else
		vals = 0;
	return (vals);
}
