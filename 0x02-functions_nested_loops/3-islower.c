#include "main.h"

/**
 * _islower - checks if a character is lower case.
 * @c: An input character.
 * Return: Always 1 if c is lower and 0 if otherwise
 */
int _islower(int c)
{
	int alph;
	int lower;

	if (alph >= 97 && alph <= 122)
	{
		alph == c;
		lower = 1;
	}
	else
		lower = 0;

	return (lower);
}
