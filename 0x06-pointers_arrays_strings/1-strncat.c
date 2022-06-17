#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclent = 0, i = 0;
	char *buff = dest, *start = src;

	while (*src)
	{
		srclent++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclent)
		n = srclent;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (buff);
}
