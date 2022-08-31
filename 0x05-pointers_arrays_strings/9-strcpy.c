#include "main.h"

/**
 * *_strcpy - copies a string from source to destination
 * @src: pointer to the source string
 * @dest: pointer to the destination
 * Return: pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (!src || !dest)
		return ('\0');
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
