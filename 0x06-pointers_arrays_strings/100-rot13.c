#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13
 * @x: variable
 *
 * Return: char
 */
char *rot13(char *x)
{
	int i = 0;

	while (x[i])
	{
		while ((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z'))
		{
			if ((x[i] > 'm' && x[i] <= 'z') || (x[i] > 'M' && x[i] <= 'Z'))
			{
				x[i] -= 13;
				break;
			}
			x[i] += 13;
			break;
		}
		i++;
	}
	return (x);
}
