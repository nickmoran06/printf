#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>
#include <stdlib.h>

typdedef struct stc
{
	char *n;

	int (*f)(va_list);
} stc_p;

int _putchar(char c);
int p_charac(va_list type_pr);
int p_string(va_list type_pr);

#endif
