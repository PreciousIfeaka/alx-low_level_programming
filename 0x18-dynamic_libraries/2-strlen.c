#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: character pointer.
 * Return: len
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
