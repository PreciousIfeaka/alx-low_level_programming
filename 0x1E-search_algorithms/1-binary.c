#include <stdio.h>
#include <math.h>

/**
 * binary_search - searches through an array(mostlt sorted) by halving
 * repeatedly.
 * @array: a pointer to the first element of the array to be searched
 * @size: the size of the array in byte
 * @value: the value to be searched for in the array
 *
 * Return: the element's index if successful or -1 if otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, i, left = 0, right = (int)(size - 1);

	if (!array)
		return (-1);
	while (left <= right)
	{
		mid = floor((left + right) / 2);
		printf("Searching in array:");
		if (array[mid] < value)
		{
			for (i = left; i < right; i++)
				printf(" %d,", array[i]);
			printf(" %d\n", array[i]);
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			for (i = left; i < right; i++)
				printf(" %d,", array[i]);
			printf(" %d\n", array[i]);
			right = mid - 1;
		}
		else if (array[mid] == value)
		{
			for (i = left; i < right; i++)
				printf(" %d,", array[i]);
			printf(" %d\n", array[i]);
			return (mid);
		}
	}

	return (-1);
}
