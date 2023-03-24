#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameter
 *
 * @n: variable
 *
 * Return: sum of parameter
 */

int sum_them_all(const unsigned int s, ...)
{
	va_list an;
	unsigned int g;
	int result = 0;

	va_start(an, n);

	for (g = 0; g < n; g++)
		result += va_arg(an, int);

	va_end(an);
	return (result);
}
