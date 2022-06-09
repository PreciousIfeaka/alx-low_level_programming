#include "main.h"

/**
 * _isupper - checks if a character is upper case alphabet
 * @c: input character
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	int alph = c;
	int upper;

	if (alph >= 65 && alph <= 90)
		upper = 1;
	else
		upper = 0;
	return (upper);
}
