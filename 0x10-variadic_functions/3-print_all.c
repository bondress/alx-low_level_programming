#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments
 * passed to the function.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int in;
	va_list all;
	char *str, *sep;

	va_start(all, format);

	sep = "";

	in = 0;
	while (format && format[in])
	{
		switch (format[in])
		{
			case 'c':
				printf("%s%c", sep, va_arg(all, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				in++;
				continue;
		}
		sep = ", ";
		in++;
	}

	printf("\n");
	va_end(all);
}
