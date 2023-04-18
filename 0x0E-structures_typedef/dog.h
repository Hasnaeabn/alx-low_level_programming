/**
 * dog - new struct for dog names age and owner.
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: the owner of the dog.
 */
#ifndef DOG_H
#define DOG_H
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
