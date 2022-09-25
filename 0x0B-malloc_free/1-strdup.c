#include "main.h"

/**
 * _strdup - returns a pointer to a string duplicate
 * @str: the string to be duplicated
 *
 * Return: NULL if failed or a pointer to the allocated space.
 */

char *_strdup(char *str)
{
	char *s;
	int i, index;


	if (!str)
		return (NULL);

	i = _strlen(str);

	s = malloc(sizeof(char) * (i + 1));

	if (!s)
	{
		free(s);
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		s[index] = str[index];
	}
	return (s);
}

/**
 * _strlen - finds the length of a string
 * @str: the string whose length is being found
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
