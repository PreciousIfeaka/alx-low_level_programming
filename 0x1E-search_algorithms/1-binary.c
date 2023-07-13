#include <stdio.h>
#include <math.h>
#include "search_algos.h"


/**
 * binary_search - searches through an array with binary search algo
 * @array: the array to be searched
 * @size: number of elements in the array
 * @value: value to be searched
 *
 * Return: value index in array, else -1 if it fails.
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0;
	unsigned int right = size - 1;
	unsigned int middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);

		middle = floor((right + left) / 2);

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = (middle + 1);
		else if (array[middle] > value)
			right = (middle - 1);
	}
	return (-1);
}


/**
 * print_array - prints the elements of an array.
 * @array: The array to be searched
 * @L: the index of the first element
 * @R: index of the right element
 *
 * Return: the array elements if successful.
 */

void print_array(int *array, int L, int R)
{
	int i;

	printf("Searching in array:");
	for (i = L; i < R; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[R]);
}
