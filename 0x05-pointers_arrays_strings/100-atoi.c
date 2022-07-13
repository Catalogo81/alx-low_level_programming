#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string pointer
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int cnvNum = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (cnvNum > 0)
			break;
		else if (*s >= '0' && *s <= '9')
			cnvNum = (cnvNum * 10) + (*s - '0');
	} while (s++);

	return (cnvNum * sign);
}
