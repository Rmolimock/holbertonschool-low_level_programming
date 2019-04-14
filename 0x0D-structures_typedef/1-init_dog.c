#include <stdlib.h>
#include "holberton.h"
#include "dog.h"

/**
 *init_dog - initializes a varaiable of data type "struct dog"
 *@d: instance of dog to be initialized
 *@name: name of dog to be initialized
 *@age: age of dog to be initialized
 *@owner: owner of dog to be initialized
 *
 *Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
