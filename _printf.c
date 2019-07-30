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
		{0, NULL}
	};

	while (stc[counter].d != 0)
	{
		if (n == stc[counter].d)
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
	int y = 0;
	va_list type;
	int (*f)(va_list);
	int counter = 0;

	if (format != NULL)
{
		va_start(type, format);
		for (counter = 0; format[counter] != '\0'; counter++)
		{
			if (format[counter] != '%')
				y += _putchar(format[counter]);
			else if (format[counter] == '%' && format[counter + 1] == '\0')
				return (-1);
			else if (format[counter] == '%' && format[counter + 1] != '\0')
			{
				if (format[counter + 1] == '%')
				{
					y += _putchar(format[counter]);
					counter++;
				}
				else if (format[counter + 1] != '\0')
				{
					f = function_struct(format[counter + 1]);
					if (f)
					{
						y += f(type) - 1;
						counter++;
					}
					else
					{
						y += _putchar(format[counter] + _putchar(format[counter + 1]));
							counter++;
					}
				}
			}
		}
	}
	va_end(type);
	return (y);
}
