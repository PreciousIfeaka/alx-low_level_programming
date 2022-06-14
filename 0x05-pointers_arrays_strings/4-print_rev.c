#include "main.h"

/**
 * print_rev - a function that prints a string in the reverse order
 * @s: character pointer
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;
	
	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
