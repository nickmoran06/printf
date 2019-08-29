#include "holberton.h"

/**
 * function_struct - Entry point
 * @n: pointer
 * Return: Always 0
 */

int (*function_struct(char n))(va_list)
{
	int counter = 0;

	stc_p stc[] = {
		{'c', p_charac},
		{'s', p_string},
		{'d', p_decimal},
		{'i', p_integer},
		{'o', p_octal},
		{'b', p_binarie},
		{0, NULL}
	};

	while (stc[counter].d != 0)
	{
		if (stc[counter].d == n)
		{
			return (stc[counter].f);
		}
		counter++;
	}
	return (NULL);
}

/**
 * _printf - printing characters and strings
 * @format: Is a character string
 * Return: ..
 */
int _printf(const char *format, ...)
{
	int y = 0, i = 0;
	va_list type;
	int (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	else if (format != NULL)
	{
		va_start(type, format);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
				y += _putchar(format[i]);
			else if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);
			else if (format[i] == '%' && format[i + 1] != '\0')
			{
				if (format[i + 1] == '%')
					y += _putchar(format[i]), i++;
				else if (format[i + 1] != '\0')
				{
					f = function_struct(format[i + 1]);
					if (f)
						y = y + (f(type)), i++;
					else
						y += (_putchar(format[i]) + (_putchar(format[i + 1]))), i++;
				}
			}
		}
	}
	va_end(type);
	return (y);
}
