#include <stdio.h>
#include <unistd.h>
#include "main.h"

int _putchar(char c);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * main - prints putchar from the header file
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 8; ++i)
		_putchar(word[i]);
	_putchar('\n');


	return (0);
}
