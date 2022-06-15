#include "main.h"

/**
 * puts_half - a function that prints the second half of a string
 * Description: The program creates a function
 * @str: character pointer
 * Return: Nothing
 */

void puts_half(char *str)
{
	int n, i;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			n = i / 2;
		}
		else
			n = (i - 1) / 2;
		_putchar(str[n++]);
	}
	_putchar('\n');
}
