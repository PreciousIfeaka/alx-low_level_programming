#include <stdio.h>
/**
 * main - a code thay prints single digit decimals as integers
 *
 * Return: Always 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; ++numb)
	{
		putchar((numb % 10) + '0');
	}
	putchar('\n');
	return (0);
}
