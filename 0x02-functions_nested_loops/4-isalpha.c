#include "main.h"

/**
 * _isalpha - checks if an input character is an alphabet.
 * @c: An input character.
 * Return: 1 if the input is an alphabet or 0 if otherwise.
 */

int _isalpha(int c)
{
	int alph = c;
	int i;

	if ((alph >= 65 && alph <= 90) || (alph >= 97 && alph <= 122))
	{
		i = 1;
	}
	else
		i = 0;
	return (i);
}
