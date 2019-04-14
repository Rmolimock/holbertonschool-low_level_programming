#ifndef DOG
#define DOG

/**
 *struct dog - Data type with information for a dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 *Description: A "dog" data type
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
