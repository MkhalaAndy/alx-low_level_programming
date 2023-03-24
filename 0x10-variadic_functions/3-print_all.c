#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: lsut of arguments passed into func
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int g;
	/*amount of formats*/
	int h;
	va_list element;
	format_t arr_f[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL},
	};
	char *separator = "";

	va_start(element, format);

	/*running chars of format*/
	h = 0;

	while (format != NULL && format[h] != '\0')
	{
		/*prints if char valid*/
		g = 0;
		while (g < 4)
		{
			if (*arr_f[g].f == format[h])
			{
				printf("%s", separator);
				arr_f[g].print(element);
				separator = ", ";
				break;
			}
			g++;
		}
		h++;
	}
	printf("\n");
	va_end(element);
}

/**
 * print_c - char print
 *
 * @element: var
 *
 * Return: void
 */
void print_c(va_list element)
{
	printf("%c", va_arg(element, int));
}

/**
 * print_i - int print
 *
 * @element: var
 *
 * Return: void
 */
void print_i(va_list element)
{
	printf("%d", va_arg(element, int));
}

/**
 * print_f - float print
 *
 * @element: var
 *
 * Return: void
 */
void print_f(va_list element)
{
	printf("%f", va_arg(element, double));
}

/**
 * print_s - string float
 *
 * @element: var
 *
 * Return: void
 */
void print_s(va_list element)
{
	char *str = va_arg(element, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
