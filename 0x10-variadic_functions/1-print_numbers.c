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

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list gt;
	unsigned int x;

	va_start(gt, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (x != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(gt);
}
