#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array and initializes it.
 * size: size of the array
 * c: initializing character
 * Return: Pointer to the array if successful.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return NULL;
	else
	{
		char *buffer = malloc(sizeof(char) * size);
		buffer[0] = c;
		return (buffer);
	}
	return NULL;
}
