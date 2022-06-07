#include <stdio.h>
/**
 * main - code to print hex digits
 *
 * Return: Always 0
 */
int main(void)
{
	int numb;
	char alph;

	for (numb = 0; numb <= 9; ++numb)
	{
		putchar((numb % 10) + '0');
	}

	for (alph = 'a'; alph <= 'f'; ++alph)
	{
		putchar(alph);
	}

	putchar('\n');

	return (0);
}
