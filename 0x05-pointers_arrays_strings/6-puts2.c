#include "main.h"

/**
 * puts2 - a function that prints the alternate characters of a string
 * @str: character pointer
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
