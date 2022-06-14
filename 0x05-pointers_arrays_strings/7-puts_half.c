#include "main.h"

/**
 * puts_half - a function that prints the second half of a string
 * @str: character pointer
 * Return: Nothing
 */

int _strlen(char *s);

void puts_half(char *str)
{
	int n, length_of_string, i;

	length_of_string = _strlen(str);
	i = 0;
	if (length_of_string % 2 == 0)
		n = length_of_string / 2;
	else
		n = (length_of_string - 1)/2;
	while (*str != '\0')
	{
		i++;
		if (i >= n)
			_putchar(*str);
	}
	_putchar('\n');
}

int _strlen(char *s)                       {                                                  int i = 0;

        while (*s != '\0')
        {                                                  i++;
                s++;                               }                                          return (i);
}
