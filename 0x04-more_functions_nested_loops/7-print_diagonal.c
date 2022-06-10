#include "main.h"

/**
 * print_diagonal - prints given length of diagonal.
 * @n: input variable.
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; i++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
