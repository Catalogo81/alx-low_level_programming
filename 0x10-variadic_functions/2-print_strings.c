#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: char between strings
 * @n: number of strings passed to function
 *
 * Return: 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s_, *p;
	va_list v_list;

	if (separator == NULL)
		s_ = "";
	else if (*separator  == 0)
		s_ = "";
	else
		s_ = (char *) separator;
	va_start(v_list, n);

	if (n > 0)
		printf("%s", va_arg(v_list, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(v_list, char*);
		if (p == NULL)
		{
			p = "(nil)";
		}
		printf("%s%s", s_, p);
	}
	printf("\n");
	va_end(v_list);
}
