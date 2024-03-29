#ifndef HOLBERTON_PRINTF_HEADER
#define HOLBERTON_PRINTF_HEADER
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct stc - base struct
 * @d: character of the format
 * @f: function
 */
typedef struct stc
{
	char d;

	int (*f)(va_list);
} stc_p;

int _putchar(char c);
int p_charac(va_list type);
int p_string(va_list type);
int p_integer(va_list type);
int p_decimal(va_list type);
int _printf(const char *format, ...);
int (*function_struct(char n))(va_list);
int p_octal(va_list type);
int p_binarie(va_list type);

#endif
