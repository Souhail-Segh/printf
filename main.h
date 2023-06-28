#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

#define NULL_STR "(null)"



/**
 * struct conversion - Struct.
 *
 * @symbol: Struct fotmat.
 * @f: The function to access.
 */

struct conversion
{
	char *symbol;
	int (*f)(va_list);
};

typedef struct conversion conversion_t;


int _putchar(char c);
int _printf(const char *format, ...);
int caster(const char *format, conversion_t conv_funct[], va_list args);
int f_char(va_list);
int f_str(va_list args);
int f_perc(va_list);
int pr_num(va_list);
int f_int(va_list);
int f_intp(va_list);
int digdig(int dig, int n);
int else_function(char format, int print_result);

#endif
