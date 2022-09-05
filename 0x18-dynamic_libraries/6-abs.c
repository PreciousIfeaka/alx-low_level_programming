#include "main.h"

/**
 * _abs - prints the absolute value of an input.
 * @x: input variable
 * Return: Always 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
