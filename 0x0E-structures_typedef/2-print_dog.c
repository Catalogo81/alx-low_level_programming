#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: dog struct
 *
 * Return: dog attributes
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	else if (d.name == NULL || d.age == NULL || d.owner == NULL)
	{
		printf("%s", nil)
	}
	else
	{
		printf("Name: %s\n", d.name);
		printf("Age: %d\n", d.age);
		printf("Owner: %s\n", d.owner);
	}
}
