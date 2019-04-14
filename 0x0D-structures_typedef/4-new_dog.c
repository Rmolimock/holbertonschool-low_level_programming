#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog - creates a new dog_t struct
 *@name: name of dog variable
 *@age: age of dog variable
 *@owner: owner of dog variable
 *
 *Return: Pointer to newly created dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int k = 0;
	dog_t *scoot;

	scoot = malloc(sizeof(dog_t));
	if (scoot == NULL)
		return (NULL);
	while (name[i])
		i++;
	while (owner[k])
		k++;
	scoot->name = malloc((i + 1) * sizeof(char));
	if (scoot->name == NULL)
	{
		free(scoot);
		return (NULL);
	}
	for (i = 0; (name[i]); i++)
		scoot->name[i] = name[i];
	scoot->name[i] = '\0';
	scoot->owner = malloc((k + 1) * sizeof(char));
	if (scoot->owner == NULL)
	{
		free(scoot->name);
		free(scoot);
		return (NULL);
	}
	for (i = 0; (owner[i]); i++)
		scoot->owner[i] = owner[i];
	scoot->owner[i] = '\0';
	scoot->age = age;
	return (scoot);
}
