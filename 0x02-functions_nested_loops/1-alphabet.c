#include "main.h"

/**
 * main - prints the english alphabet using functions
 *
 * Return: Always 0 (success).
 */
void print_alphabet(void);
int main(void)
{
	int alph;

	for (alph = 97; alph <= 122; ++alph)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}


