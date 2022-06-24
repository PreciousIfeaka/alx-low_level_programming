#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a function that multiplies two integer arguments
 * @argc: argument count variable
 * @argv: argument vector variable
 * Return: 1 if unsuccessful
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
