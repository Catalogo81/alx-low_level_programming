#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * c - char, i - integer, f - float, s - string (char *)
 *
 * Return: 0 (Success)
 */
void print_all(const char * const format, ...)
{
	int num = 0, index = 0;
	char *s_, *string;
	va_list v_list;

	va_start(v_list, format);

	while (format && format[index])
		index++;
	s_ = ", ";
	while (format && format[num])
	{
		if (num  == (index - 1))
			s_ = "";
		switch (format[num])
		{
			case 'c':
				printf("%c%s", va_arg(v_list, int), s_);
				break;
			case 'i':
				printf("%d%s", va_arg(v_list, int), s_);
				break;
			case 'f':
				printf("%f%s", va_arg(v_list, double), s_);
				break;
			case 's':
				string = va_arg(v_list, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", string, s_);
				break;
		}
		num++;
	}
	printf("\n");
	va_end(v_list);
}
