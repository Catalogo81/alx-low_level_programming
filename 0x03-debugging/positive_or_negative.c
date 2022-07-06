#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - variable n will change everytime the program is ran
 * @i: is the number thats passed
 * then if statement will check if n is negative, positive or 0
 * Return: void
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

}
