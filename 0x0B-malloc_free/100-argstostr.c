#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: 1st parm
 * @av: 2nd parm
 *
 * Return: pointer to new string or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, k, length = 0;
	char *str;

	if (av == 0 || ac == 0)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			length++;
			j++;
		}
		length++;
		i++;
	}
	length++;
	str = (char *)malloc(sizeof(char) * length);
	if (str == 0)
	{
		free(str);
		return (0);
	}
	i = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = 0;
	return (str);
}
