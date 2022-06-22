#include "main.h"

/**
 * _strchr - function that finds the location of a character in a string.
 * @s: pointer to first array element.
 * @c: character variable
 * Return: s if successful or 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return (s);
	else
		return ('\0');
	return (0);
}
