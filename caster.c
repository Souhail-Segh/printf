#include "main.h"

/**
 * else_function - else function
 * @format: the string.
 * @print_result: length
 * Return: length
 */

int else_function(char format, int print_result)
{
	_putchar(format);
	print_result++;
	return (print_result);
}


/**
 * caster - Function that writes a character and deter the func.
 * @format: the string.
 * @args: argument pointer.
 * @conv_funct: a list of types
 * Return: number of chars printed.
 */

int caster(const char *format, conversion_t conv_funct[], va_list args)
{
	int x, y, res_val, print_result;

	print_result = 0;
	x = 0;
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			y = 0;
			while (conv_funct[y].symbol != NULL)
			{
				if (format[x + 1] == conv_funct[y].symbol[0])
				{
					res_val = conv_funct[y].f(args);
					if (res_val == -1)
						return (-1);
					print_result += res_val;
					break;
				}
				y++;
			}
			if (conv_funct[y].symbol == NULL && format[x + 1] != ' ')
			{
				if (format[x + 1] != '\0')
				{
					_putchar(format[x]);
					_putchar(format[x + 1]);
					print_result = print_result + 2;
				}
				else
					return (-1);
			}
			x = x + 1;
		}
		else
			print_result = else_function(format[x], print_result);
		x++;
	}
	return (print_result);
}
