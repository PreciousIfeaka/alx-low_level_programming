#include "main.h"

/**
 * _strcat -  a function thay concatenates 2 strings.
 * @dest: An input char pointer
 * @src: Second input char constant
 * Return: A pointer to the string result
 */

char *_strcat(char *dest, char *src)
{
	char *buff = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (buff);
}
