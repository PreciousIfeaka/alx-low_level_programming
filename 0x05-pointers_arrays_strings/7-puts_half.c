#include "main.h"

/**
 * _strlen - a function that determines the length of a string
 * puts_half - a function that prints the second half of a string
 * Description: The program creates a function
 * that prints the second half of a string
 * @str: character pointer
 * @s: A character pointer also.
 * Return: Nothing
 */

int _strlen(char *s);

void puts_half(char *str)
{
	int n, length_of_string;
	int i = 0;
	int p = 0;

	while (*str != '\0')
	{
		p++;
		str++;		
	}
	if (p % 2 == 0)
		n = p / 2;
	else
		n = (p - 1) / 2;
	while (*str != '\0')
	{
		if (i >= n)
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
	_putchar('\n');
}
