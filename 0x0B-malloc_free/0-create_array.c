#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array and initializes it.
 * @size: size of the array
 * @c: initializing character
 * Return: Pointer to the array if successful.
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;

	buffer = malloc(sizeof(char) * size);
	if (size <= 0)
		return (NULL);
	else if (size > 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			buffer[i] = c;
		}
	}
	return (buffer);
}
