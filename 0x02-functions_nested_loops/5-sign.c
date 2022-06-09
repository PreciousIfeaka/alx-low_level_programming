#include "main.h"

/**
 * print_sign - A function that prints the sign of an integer.
 * @n: An input integer.
 * Return: 1 or 0 or -1 depending on the input sign.
 */

int print_sign(int n)
{
	int num = n;
	int i;

	if (num > 0)
	{
		i = 1;
		_putchar(43);
	}
	if (num == 0)
	{
		i = 0;
		_putchar(48);
	}
	if (num < 0)
	{
		i = -1;
		_putchar(45);
	}
	return (i);
}
