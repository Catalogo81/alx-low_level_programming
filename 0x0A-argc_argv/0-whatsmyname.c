#include <stdio.h>

/**
 * main - prints out the file name
 * @argc: interger parameter
 * @argv: string array parameter
 *
 * Return: 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
