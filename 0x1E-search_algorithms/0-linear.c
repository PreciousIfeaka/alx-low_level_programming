#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches an element of an array linearly
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: value if succesful else, -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);
	else if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	else
	{
		for (i = 0; i < size && array[i] != value; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		if (array[i] == value)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		else if (array[i] != value)
			i = -1;
	}
	return (i);
}
