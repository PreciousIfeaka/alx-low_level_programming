#include "main.h"

/**
 * puts_half - a function that prints the second half of a string
 * Description: The program creates a function
 * @str: character pointer
 * Return: Nothing
 */

void puts_half(char *str)
{
	int n, p;
	int i = 0;

	while (str[i] != '\0')
		++i;
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
		n = (i + 1) / 2;
	p = n;
	while (p < i)
		_putchar(str[p++]);
	_putchar('\n');
}
