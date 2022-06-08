#include "main.h"

/**
 * _islower - function to check if an input is lower case alphabet.
 * @c:  an input character
 * Return: Always 1 if it is lower case or 0 if otherwise
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
