#include "main.h"

/**
 * times_table - prints 9 times table.
 *
 * Return: Returns void.
 */

void times_table(void)
{
	int digit, multiple, result;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');
		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');
			result = digit * multiple;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
