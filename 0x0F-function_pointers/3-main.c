#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations of two numbers
 * if the number of arguments is wrong, print Error, new line,
 * and exit with the status 98
 * if the operator is none of the above, print Error, new line,
 * exit with status 99
 * if the user tries to divide (/ or %) by 0, print Error, new line,
 * exit with status 100
 * @argc: checks for the aguments
 * @argv: pointer to arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (*op == '%' || *op == '/')
	{
		if (*argv[3] == '0')
		{
			printf("Error\n");
			exit(100);
		}
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}

