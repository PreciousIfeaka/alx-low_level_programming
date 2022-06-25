#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a function that adds positive arguments
 * @argc: argument count variable
 * @argv: argumemt vector variable
 * Return: 0 if successful and 1 if failed
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
		printf("0\n");
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
