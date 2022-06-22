#include "main.h"

/**
 * _memcpy - a function that copies n bytes to a destination string.
 * @dest: pointer to destination first address.
 * @src: pointer to source address.
 * @n: number of bytes to be copied
 * Return: dest, if successful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *buff = dest;

	while (n--)
	{
		*buff++ = *src++;
	}
	return (dest);
}
