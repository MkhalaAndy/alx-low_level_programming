#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings, followed by a new line
 *
 * @separator: pointer
 * @n: variable
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list an;
	unsigned int g;
	char *s;

	va_start(an, n);

	for (g = 0; g < n; g++)
	{
		s = va_arg(an, char *);

		if (!s)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (g < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(an);
}
