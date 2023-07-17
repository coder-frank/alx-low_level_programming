#include "main.h"
/**
 * init_dog - initailize the dog structure
 * @struct dog *d: The dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog 
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
