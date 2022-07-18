#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to the new name
 * @age: pointer to the age
 * @owner: pointer to the owner
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newName, *newOwner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	newName = malloc(sizeof(_strlen(name) + 1));
	if (!newName)
	{
		free(newName);
		return (NULL);
	}
	newName = _strdup(newName, name);
	new_dog->name = newName;

	newOwner = malloc(sizeof(_strlen(owner) + 1));
	if (!newOwner)
	{
		free(newOwner);
		return (NULL);
	}
	newOwner = _strdup(newOwner, owner);
	new_dog->owner = newOwner;

	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen - a function that returns the length of string
 * @str: a pointer variable to the string
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - a function that duplicates a string
 * @str: a pointer variable to the string
 * @dest: a pointer variable to the destination
 *
 * Return: pointer to the destination
 */

char *_strdup(char *dest, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
