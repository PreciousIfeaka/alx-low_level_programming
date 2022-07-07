#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that points to a number of functions
 * @array: elements to be worked on
 * @size: array size
 * @action: pointer to functions
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (*array && *action && size)
	{
		unsigned int i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
