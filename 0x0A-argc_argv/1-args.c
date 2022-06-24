#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the number of arguments
 * @argc: argument count variable
 * @argv: argument vector variable
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
