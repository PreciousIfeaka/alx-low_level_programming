#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure with elements
 * @owner: first element
 * @name: element to describe dog's name
 * @age: element to describe dog's age
 *
 * my_dog - typedef for struct dog
 * description: this code tries to define properties of dog
 */

typedef struct dog
{
	char *owner;
	char *name;
	float age;
} my_dog;
#endif
