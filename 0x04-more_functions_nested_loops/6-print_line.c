#include "main.h"

/**
 * print_line - prints n numbers of line.
 * @n: input variable character.
 * Return: Nothing.
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; ++i)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
