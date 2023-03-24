#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers, followed by a new line
 *
 * @separator: pointer
 * @n: variable
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int s, ...)
{
	va_list an;
	unsigned int s;

	va_start(an, n);

	for (s = 0; s < n; s++)
	{
		printf("%d", va_arg(an, int));
		if (s != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(an);
}
