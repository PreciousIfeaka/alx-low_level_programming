#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int alph;
	int freq = 1;

	while (freq <= 10)
	{
		for (alph = 97; alph <= 122; ++alph)
		{
			_putchar(alph);
			++alph;
		}

		++freq;
		_putchar('\n');
	}
}
