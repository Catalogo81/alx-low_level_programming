#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: int parameter
 * @argv: string array parameter
 *
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, num, answ = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			answ++;
		}
	}
	printf("%d\n", answ);
	return (0);
}
