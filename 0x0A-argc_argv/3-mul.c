#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: integer parameter
 * @argv: string array par
 * answ: answer variable
 *
 * Return: 0-Success 1-Error
 */
int main(int argc, char *argv[])
{
	int answ, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	answ = n1 * n2;

	printf("%d\n", answ);
	return (0);
}
