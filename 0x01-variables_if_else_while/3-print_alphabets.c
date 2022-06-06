#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';
	char alph1 = 'A';
	while (alph <= 'z')
	{
		putchar(alph);
		++alph;
	}

	while (alph1 <= 'Z')
	{
		putchar(alph1);
		++alph1;
	}
	putchar('\n');
	return (0);	
}
