#include "main.h"

/**
 * _isalpha - checks if an input character is an alphabet.
 * @c: An input character.
 * Return: 1 if the input is an alphabet or 0 if otherwise.
 */

int _isalpha(int c)
{
	int alph = 65;
	int i;

	if ((alph > 64 && alph < 91) || (alph > 96 && alph < 123))
	{
		if (alph == c)
			i = 1;
	}
	else
		i = 0;
	return (i);
}
