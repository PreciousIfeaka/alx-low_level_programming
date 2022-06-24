#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the number of arguments
 * @argc: argumemt count variable
 * @argv: argument vector variable
 * Return: Always 0 (successful)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
