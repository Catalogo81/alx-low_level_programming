#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: is the array element variable
 * @n: is the number of elements variable
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, aux, *p;

	p = a;
	for (i = 1; i < n; i++)
	{
		p++;
	}
	for (j = 0; j < i / 2; j++)
	{
		aux = a[j];
		a[j] = *p;
		*p = aux;
		p--;
	}
}
