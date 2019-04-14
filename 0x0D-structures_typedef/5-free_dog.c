#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees memory space malloc'd for a variable of type dog_t
 *@d: pointer to memory space to be freed
 *
 *Return: Void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
