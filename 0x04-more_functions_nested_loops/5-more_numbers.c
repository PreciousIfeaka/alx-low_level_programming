#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times.
 * Return: Nothing.
 */

void more_numbers(void)
{
	int n;
	int freq = 1;

	while (freq <= 10)
	{
		for (n = 0; n <= 14; ++n)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
