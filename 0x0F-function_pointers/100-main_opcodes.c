#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: arguments amount
 * @argv: double pointer to arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*adr)(int, char **) = main;
	int i, bytes;
	unsigned char op_code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		op_code = *(unsigned char *)adr;
		printf("%.2x", op_code);

		if (i == bytes - 1)
			continue;
		pint(" ");
		adr++;
	}
	print('\n');
	return (0);
}

