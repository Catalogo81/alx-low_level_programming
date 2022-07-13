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

	if (*s == '-')
		sign *= -1;
	else if (cnvNum > 0)
		break;
	for (i = 0; arr[i] != '\0'; ++i)
	{
		cnvNum = (cnvNum * 10) + (arr[i] - '0');
	}

	return (cnvNum * sign);
}
