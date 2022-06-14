#include "main.h"

/**
 * swap_int - a function that swaps two integer values assigned to variables
 * @a: first pointer variable
 * @b: second pointer variabls
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
