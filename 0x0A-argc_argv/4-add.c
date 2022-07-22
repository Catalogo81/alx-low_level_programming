#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int parameter
 * @argv: string array parameter
 *
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, k, answ, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		answ += num;
	}
	printf("%d\n", answ);
	return (0);
}
