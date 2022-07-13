#include "main.h"

/**
 * rev_string - that reverses a string
 * @s: string pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	char revString = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		count--;
		revString = s[i];
		s[i] = s[count];
		s[count] = revString;
	}
}
