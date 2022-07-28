#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: lowest digit
 * @max: highest digit
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int i, size, *ar;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ar = malloc(sizeof(int) * size);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = min++;
	return (ar);
}
