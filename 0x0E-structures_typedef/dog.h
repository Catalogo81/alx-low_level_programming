#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Description: Dog attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_td;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif