#include "main.h"

/**
 * _puts - a function that prints a string to standard output.
 * @str: string pointer
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
