#ifndef DOG
#define DOG

/**
 * struct dog - Creates a dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

/**
 * dog_t - Creates a dog structure
*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
