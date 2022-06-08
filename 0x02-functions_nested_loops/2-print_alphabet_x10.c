#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int alph;
	int freq;

	for (freq = 1; freq <= 10; ++freq)
	{
		for (alph = 97; alph <= 122; ++alph)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
