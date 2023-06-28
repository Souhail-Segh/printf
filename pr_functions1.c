#include "main.h"

/**
 * f_char - function that prints character.
 * @args: argument pointer.
 *
 *Return: return (1).
 */

int f_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}


/**
 * f_str - function that prints string.
 * @args: argument pointer.
 *
 * Return: number of chars printed.
 */

int f_str(va_list args)
{
	int x;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL)
		s = NULL_STR;
	for (x = 0; s[x] != '\0'; x++)
		_putchar(s[x]);
	return (x);
}

/**
 * f_perc - prints the percent.
 * @args: argument pointer.
 *
 * Return: return (1).
 */

int f_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
