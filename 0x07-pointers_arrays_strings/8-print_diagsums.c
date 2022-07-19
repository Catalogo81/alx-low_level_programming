#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integer * @a: number
 * @size: size of square
 *
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n1 = 0, n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		n2 += a[i];
		a -=size;
	}
	printf("%d, %d\n", n1, n2);
}
