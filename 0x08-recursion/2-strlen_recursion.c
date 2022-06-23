#include "main.h"

/**
 * _strlen_recursion - a function that prints the length of a string
 * @s: pointer to string
 * Return: The string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = 1 + _strlen_recursion(s + 1);
		return (i);
	}
	return (0);
}
