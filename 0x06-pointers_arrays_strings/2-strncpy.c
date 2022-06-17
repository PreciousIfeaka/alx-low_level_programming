#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclent = 0, i = 0;
	char *buff = dest, *start = src;

	while (*src)
	{
		srclent++;
		src++;
	}

	srclent++;

	if (n > srclent)
		n = srclent;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (buff);
}
