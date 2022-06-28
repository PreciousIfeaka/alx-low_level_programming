#include "main.h"

/**
 * _memset - a function that replaces a set
 * of array elements with another character.
 * @s: the string to be replaced.
 * @b: the replacing character.
 * @n: the number of characters to be replaced.
 * Return: s if successful.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *buff = s;

	while (n--)
	{
		*buff++ = b;
	}
	return (s);
}
