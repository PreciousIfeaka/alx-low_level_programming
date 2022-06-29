#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array and initializes it.
 * @size: size of the array
 * @c: initializing character
 * Return: Pointer to the array if successful.
 */

char *create_array(unsigned int size, char c)
{
	char *buffer = NULL;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	else if (size > 0)
	{
		buffer = (char *)malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			buffer[i] = c;
		}
	}
	return (buffer);
	free(buffer);
}
