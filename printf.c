#include "main.h"
#include <stdint.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: the string.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	int print_result;
	va_list args;

	conversion_t conv_funct[] =     {
		{"u", f_intp},
		{"d", f_int},
		{"i", f_int},
		{"c", f_char},
		{"s", f_str},
		{"%", f_perc},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	/** call a parser function*/

	print_result = caster(format, conv_funct, args);
	va_end(args);

	return (print_result);
}

