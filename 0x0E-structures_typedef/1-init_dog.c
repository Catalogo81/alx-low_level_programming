#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog object
 * @name: dog name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: dog attributes
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		name = dog_name;
		age = dog_age;
		owner = dog_owner;
	}
}
