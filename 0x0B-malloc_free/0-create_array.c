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
	char *buffer;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);
	else if (size > 0)
	{
		buffer = malloc(sizeof(char) * size);
		while (i < size)
		{
			buffer[i] = c;
			i++;
		}
		return (buffer);
	}
	else
		return (NULL);
}
