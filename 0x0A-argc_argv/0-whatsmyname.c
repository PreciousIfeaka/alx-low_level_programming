#include <stdio.h>
#include "main.h"

/**
 * main - a function that runs the program
 * @argc: argument count variable
 * @argv: argument vector variable
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
