#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts binary to decimal
 * @b: the binary number to be converted
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;
	unsigned int num;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		i++;
	}
	while (b && (n < (_strlen(b) - 1)))
	{
		num = b[n];
		num = (num * 2) + b[n++];
	}
	return (num);
}

/**
 * _strlen - returns the length if a strng
 * @c: a pointer to the string
 *
 * Return: the string length
 */

unsigned int _strlen(const char *c)
{
	unsigned int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
