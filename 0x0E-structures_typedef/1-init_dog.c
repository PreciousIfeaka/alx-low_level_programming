#include "dog.h"

/**
 * init_dog - a function that initializes variable of type struct dog
 * @d: the initialized variable
 * @name: dog's name variable
 * @owner: dog's owner variable
 * @age: dog's age variable
 *
 * Return: a pointer to the initialized variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
