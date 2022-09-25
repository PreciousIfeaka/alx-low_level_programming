#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated strings in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, index1, index2;

	if (!s1)
		s1 = "";
	else if (!s2)
		s2 = "";

	i = strlen(s1) + strlen(s2);
	s = malloc(sizeof(char) * (i + 1));

	if (!s)
	{
		free(s);
		return (NULL);
	}
	for (index1 = 0; s1[index1] != '\0'; index1++)
	{
		s[index1] = s1[index1];
	}
	for (index2 = 0; s2[index2] != '\0'; index2++, index1++)
	{
		s[index1] = s2[index2];
	}
	return (s);
}
