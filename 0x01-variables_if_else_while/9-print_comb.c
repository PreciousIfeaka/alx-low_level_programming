#include <stdio.h>

/**
 * main - code entry
 *
 * Return: Always 0
 */

int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; ++numb)
	{
		putchar((numb % 10) + '0');
		
		if (numb == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	
	putchar('\n');
	return (0);
}
