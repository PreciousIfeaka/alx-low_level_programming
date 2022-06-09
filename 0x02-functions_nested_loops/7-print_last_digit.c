#include "main.h"

/**
 * print_last_digit - function that prints the last digit of  number.
 * @x: input variable
 * Return: Always last digit.
 */

int print_last_digit(int x)
{
	int m;

	m = x % 10;
	if (m < 0)
		m *= -1;
	_putchar(m + '0');

	return (m);
}
