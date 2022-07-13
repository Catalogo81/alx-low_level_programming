#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string pointer
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int i, cnvNum = 0;
	int sign = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (*s == '-')
			sign *= -1;
		else if (cnvNum > 0)
			break;

		cnvNum = (cnvNum * 10) + (s[i] - '0');
	}

	return (cnvNum * sign);
}
