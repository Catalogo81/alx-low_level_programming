#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * 	variable n declared
 * 	variable n will change everytime the program is ran
 * 	then if statement will check if n is negative, positive or 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
