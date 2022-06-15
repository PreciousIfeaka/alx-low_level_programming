#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints the elements on an array.
 * @a: integer pointer variable
 * @n: number of elements variable
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	_putchar('\n');
}
