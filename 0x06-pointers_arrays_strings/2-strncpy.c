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
	int i = 0;
	char *buff = dest;

	while (*src != '\0' && i < n)
	{
		i++;
		*dest++ = *src++;
	}
	*dest = '\0';
	return (buff);
}
