#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a function that adds positive arguments
 * @argc: argument count variable
 * @argv: argumemt vector variable
 * Return: 0 if successful and 1 if failed
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (1);
	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("%s\n", "Error");
				return (1);
			}
			if (atoi(argv[i]) > 0)
				sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
