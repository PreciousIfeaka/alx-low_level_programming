#include <stdio.h>
#include "arith.h"

/**
 * add - adds two integers
 * sub - subtracts two integers
 * mul - multiplies two integers
 * div - divides two integers
 * mod - gives the modulus of two integers
 * @a: the first variable
 * @b: the second variable
 *
 * Return: all retuens an integer
 */

int add(int a, int b)
{
	int c = a + b;
	return (c);
}

int sub(int a, int b)
{
	int c = a - b;
	return (c);
}

int mul(int a, int b)
{
	 int c = a * b;
	return (c);
}

int div(int a, int b)
{
	int c = a / b;
	return (c);
}

int mod(int a, int b)
{
	int c = a % b;
	return (c);
}
