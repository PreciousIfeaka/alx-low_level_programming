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
	int i = 0;
	char *buff = dest;

	while (*src != '\0')
	{
		src++;
	}

	while (*dest != '\0' && i < n)
	{
		i++;
		*dest++ = *src++;
	}

	*dest = '\0';
	return (buff);
}
