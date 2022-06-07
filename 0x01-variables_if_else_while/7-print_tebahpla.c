#include <stdio.h>
/**
 * main - prints alphabet in reverse order
 *
 * Return: Always 0
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; --alph)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
