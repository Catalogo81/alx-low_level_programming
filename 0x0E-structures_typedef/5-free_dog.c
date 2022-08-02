#include "dog.h"
#include <stdio.h>
#include <stdlib>

/**
 * free_dog - frees dogs
 * @d: dog struct
 *
 * Return: 0 (Success)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
