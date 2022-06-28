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

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;

	*dest = '\0';
	return (buff);
}
