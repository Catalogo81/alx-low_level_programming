#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: numbers
 *
 * Return: 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v_list;
	unsigned int i;
	char *s_;

	if (separator == NULL)
		s_ = "";
	else if (separator == 0)
		s_ = "";
	else
		s_ = (char *) separator;
	va_start(v_list, n);

	if (n > 0)
		printf("%d", va_arg(v_list, int));
	for (i = 1; i < n; i++)
		printf("%s%d", s_, va_arg(v_list, int));
	printf("\n");
	va_end(v_list);
}
