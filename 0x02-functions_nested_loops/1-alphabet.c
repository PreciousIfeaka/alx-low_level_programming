#include "main.h"

/**
 * print_alphabet - performs the description.
 * Description:the function prints lower case.
 * Return: Always 0 (success).
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 97; alph <= 122; ++alph)
	{
		_putchar(alph);
	}
	_putchar('\n');
}


