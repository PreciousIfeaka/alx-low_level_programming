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

	for (alph = 97; alph <= 122; ++alph)
		while (freq <= 10)
			_putchar(alph);
			_putchar('\n');
}
