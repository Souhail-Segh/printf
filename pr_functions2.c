#include "main.h"

/**
 * digdig - function that prints a number.
 * @dig: the the number to print.
 * @n: the length of the number.
 *
 * Return: the number.
 */

int digdig(int dig, int n)
{
	if (dig / 10 == 0)
	{
		_putchar('0' + dig);
		n = n + 1;
	return (n);
	}

	n = digdig(dig / 10, n);
	n = n + 1;
	_putchar('0' + dig % 10);
	return (n);
}

/**
 * pr_num - prints a number with options
 * @args: argument pointer.
 *
 * Return: the length of printed num.
 */

int pr_num(va_list args)
{
	int n;
	int length;
	int num;

	n  = va_arg(args, int);
	length = 0;
	num = n;

	num = n;
	if (n < 0)
	{
		length += _putchar('-');
		num = n * -1;
	}

	length = digdig(num, 0);

	return (length);
}


/**
 * f_int - function that prints integer.
 * @args: argument pointer.
 *
 * Return: the number to print.
 */

int f_int(va_list args)
{
	int num;

	num = pr_num(args);
	return (num);
}

/**
 * digdigp - function that prints a positive number.
 * @dig: the the number to print.
 * @n: the length of the number.
 *
 * Return: the number.
 */
int digdigp(unsigned int dig, int n)
{
	if (dig / 10 == 0)
	{
		_putchar('0' + dig);
		n = n + 1;
	return (n);
	}

	n = digdig(dig / 10, n);
	n = n + 1;
	_putchar('0' + dig % 10);
	return (n);
}

/**
* f_intp - function that prints positive integer.
* @args: argument pointer.
*
* Return: the number to print.
*/
int f_intp(va_list args)
{
	unsigned int num;
	int l;

	num = va_arg(args, unsigned int);
	l = digdigp(num, 0);
	return (l);
}
