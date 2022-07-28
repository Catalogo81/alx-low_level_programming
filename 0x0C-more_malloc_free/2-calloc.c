#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number memory byte
 * @size: size of the array
 *
 * Return: 0 or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	unsigned int i;
	char *filler;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);
	filler = m;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';
	return (m);
}
